#pragma once

#include <vector>

#include "Node.h"


namespace My2DEffectEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// EffectForm の概要
	/// </summary>
	public ref class EffectForm : public System::Windows::Forms::Form
	{
	public:
		EffectForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//

			pNode = new Node;
			m_frame = 0;

		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~EffectForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		Node* pNode;
		int m_frame;

		BufferedGraphicsContext^ currentContext;
		BufferedGraphics^ myBuffer;

	private: Bitmap^ saveImage;
	private: Graphics^ saveGrah;

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 16;
			this->timer1->Tick += gcnew System::EventHandler(this, &EffectForm::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(382, 349);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &EffectForm::pictureBox1_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(278, 247);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// EffectForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(378, 344);
			this->ControlBox = false;
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->pictureBox2);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"EffectForm";
			this->Text = L"EffectForm";
			this->Load += gcnew System::EventHandler(this, &EffectForm::EffectForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void EffectForm_Load(System::Object^  sender, System::EventArgs^  e) {
		this->BackColor = Color::Black;


		// ダブルバッファの設定
		currentContext = BufferedGraphicsManager::Current;

		myBuffer = currentContext->Allocate(this->pictureBox1->CreateGraphics(),
			this->pictureBox1->DisplayRectangle);


		// 各要素の挙動設定
		{
			std::vector<Transform*> m_trans;
			m_trans.resize(15);

			for (std::vector<Transform*>::size_type i = 0; i < m_trans.size(); i++)
			{
				m_trans[i] = new Transform();

				// 各トランスフォームに拡散する角度を設定
				m_trans[i]->SetMoveAngle((360 / 15) * i);

				// 各トランスフォームに拡散する速度を設定
				m_trans[i]->SetMoveAmount(3.0f);
			}
			pNode->SetTransform(m_trans);
		}

		pNode->SetImage(Image::FromFile("kr43.png"));

		saveImage = gcnew Bitmap(pictureBox1->Width, pictureBox1->Height);
		saveGrah = Graphics::FromImage(saveImage);

	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		// 仮描画用のバッファ
		Graphics^ gr = myBuffer->Graphics;

		// 仮バッファに描画
		pNode->Draw(gr);

		// 描画内容をスクリーンに反映
		myBuffer->Render();

		saveGrah->Clear(Color::Black);
		pNode->Draw(saveGrah);


		// ノードデータ更新
		pNode->Update(m_frame);


	}

	public: void SetFrame(int frame)
	{
		m_frame = frame;
	}


	public: Bitmap^ GetMap()
	{
		return saveImage;
	}

	private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
	}
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
