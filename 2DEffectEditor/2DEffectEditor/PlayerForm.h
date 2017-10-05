#pragma once


namespace My2DEffectEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// PlayerForm の概要
	/// </summary>
	public ref class PlayerForm : public System::Windows::Forms::Form
	{
	public:
		PlayerForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			timerEnable = false;
			frame = 1;
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~PlayerForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button1;

			 // メンバ変数
	private:
		int frame;
		bool timerEnable;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TrackBar^  trackBar1;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(100, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 62);
			this->button2->TabIndex = 1;
			this->button2->Text = L"停止";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &PlayerForm::button2_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(229, 12);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(500, 69);
			this->trackBar1->TabIndex = 2;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &PlayerForm::trackBar1_Scroll);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(61, 62);
			this->button1->TabIndex = 3;
			this->button1->Text = L"再生";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &PlayerForm::button1_Click);
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 16;
			this->timer1->Tick += gcnew System::EventHandler(this, &PlayerForm::timer1_Tick_1);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(272, 55);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(52, 18);
			this->label1->TabIndex = 4;
			this->label1->Text = L"label1";
			// 
			// PlayerForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(779, 130);
			this->ControlBox = false;
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->button2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Location = System::Drawing::Point(380, 480);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"PlayerForm";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->Text = L"Frame";
			this->Load += gcnew System::EventHandler(this, &PlayerForm::PlayerForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void PlayerForm_Load(System::Object^  sender, System::EventArgs^  e) {

		trackBar1->Maximum = 30;
		trackBar1->Minimum = 1;
		trackBar1->ForeColor = Color::Blue;

		trackBar1->TickStyle = TickStyle::None;

	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		timerEnable = true;
	}

	public: int GetFrame()
	{
		return frame;
	}

	public: void SetFrame(int frame)
	{
		this->frame = frame;
	}


	public: int GetTrackBarMax()
	{
		return trackBar1->Maximum;
	}
	public: void FrameControl()
	{
		frame++;

		if (frame > 30)
		{
			frame = 1;
		}
	}

	public: bool IsAnimating()
	{
		return timerEnable;
	}

	private: System::Void timer1_Tick_1(System::Object^  sender, System::EventArgs^  e) {
		this->Text = frame.ToString("000") + L"/30 フレーム";
		this->ControlBox = false;

		if (timerEnable)
		{
			FrameControl();
			this->trackBar1->Value = this->frame;
		}
		else
		{
			this->frame = this->trackBar1->Value;
		}
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		timerEnable = false;
	}
	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
