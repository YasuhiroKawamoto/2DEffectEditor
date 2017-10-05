#pragma once

#include "ParameterForm1.h"
#include "ParameterForm2.h"
#include "ConfigForm.h"
#include "EffectForm.h"
#include "PlayerForm.h"
#include "NodeForm.h"
#include "ImageForm.h"


namespace My2DEffectEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	const int ROW_NUM = 5;

	/// <summary>
	/// MainForm の概要
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//

		}


	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		int m_frame;
		bool saveFlag = false;
		bool Flag = false;
		int count = 0;
		bool config = false;
		ArrayList^ bmpArray = gcnew ArrayList();	// BMPの配列	
		int FrameCnt = 30;	// フレーム数（画像の数）	
		int cnt = 0;	// カウンタ

		ParameterForm1^ paramaterForm1 = gcnew ParameterForm1;
		Parameter1* para1 = new Parameter1;
		Parameter2* para2 = new Parameter2;

		ParameterForm2^ paramaterForm2 = gcnew ParameterForm2;
		PlayerForm^ playerForm = gcnew PlayerForm;
		EffectForm^ effectForm = gcnew EffectForm;
		NodeForm^ nodeForm = gcnew NodeForm;
		ImageForm^ imageForm = gcnew ImageForm;
		ConfigForm^ configForm = gcnew ConfigForm;
		

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ファイルFToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ 新規NToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ 開くOToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ 上書き保存SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ 名前を付けて保存AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ 終了ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ 出力ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ 編集ToolStripMenuItem;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->ファイルFToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->新規NToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->開くOToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->上書き保存SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->名前を付けて保存AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->出力ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->終了ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->編集ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 16;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
		
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::SystemColors::Control;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ファイルFToolStripMenuItem,
					this->編集ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menuStrip1->Size = System::Drawing::Size(337, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ファイルFToolStripMenuItem
			// 
			this->ファイルFToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->新規NToolStripMenuItem,
					this->開くOToolStripMenuItem, this->上書き保存SToolStripMenuItem, this->名前を付けて保存AToolStripMenuItem, this->出力ToolStripMenuItem, this->toolStripMenuItem1,
					this->終了ToolStripMenuItem
			});
			this->ファイルFToolStripMenuItem->Name = L"ファイルFToolStripMenuItem";
			this->ファイルFToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->ファイルFToolStripMenuItem->ShowShortcutKeys = false;
			this->ファイルFToolStripMenuItem->Size = System::Drawing::Size(94, 29);
			this->ファイルFToolStripMenuItem->Text = L"ファイル(&F)";
			// 
			// 新規NToolStripMenuItem
			// 
			this->新規NToolStripMenuItem->Name = L"新規NToolStripMenuItem";
			this->新規NToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->新規NToolStripMenuItem->ShowShortcutKeys = false;
			this->新規NToolStripMenuItem->Size = System::Drawing::Size(237, 30);
			this->新規NToolStripMenuItem->Text = L"新規作成(&N)";
			// 
			// 開くOToolStripMenuItem
			// 
			this->開くOToolStripMenuItem->Name = L"開くOToolStripMenuItem";
			this->開くOToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->開くOToolStripMenuItem->ShowShortcutKeys = false;
			this->開くOToolStripMenuItem->Size = System::Drawing::Size(237, 30);
			this->開くOToolStripMenuItem->Text = L"開く(&O)";
			// 
			// 上書き保存SToolStripMenuItem
			// 
			this->上書き保存SToolStripMenuItem->Name = L"上書き保存SToolStripMenuItem";
			this->上書き保存SToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->上書き保存SToolStripMenuItem->ShowShortcutKeys = false;
			this->上書き保存SToolStripMenuItem->Size = System::Drawing::Size(237, 30);
			this->上書き保存SToolStripMenuItem->Text = L"上書き保存(&S)";
			// 
			// 名前を付けて保存AToolStripMenuItem
			// 
			this->名前を付けて保存AToolStripMenuItem->Name = L"名前を付けて保存AToolStripMenuItem";
			this->名前を付けて保存AToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->名前を付けて保存AToolStripMenuItem->ShowShortcutKeys = false;
			this->名前を付けて保存AToolStripMenuItem->Size = System::Drawing::Size(237, 30);
			this->名前を付けて保存AToolStripMenuItem->Text = L"名前を付けて保存(&A)";
			// 
			// 出力ToolStripMenuItem
			// 
			this->出力ToolStripMenuItem->Name = L"出力ToolStripMenuItem";
			this->出力ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::E));
			this->出力ToolStripMenuItem->ShowShortcutKeys = false;
			this->出力ToolStripMenuItem->Size = System::Drawing::Size(237, 30);
			this->出力ToolStripMenuItem->Text = L"出力(&E)";
			this->出力ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::出力ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(234, 6);
			// 
			// 終了ToolStripMenuItem
			// 
			this->終了ToolStripMenuItem->Name = L"終了ToolStripMenuItem";
			this->終了ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->終了ToolStripMenuItem->ShowShortcutKeys = false;
			this->終了ToolStripMenuItem->Size = System::Drawing::Size(237, 30);
			this->終了ToolStripMenuItem->Text = L"終了(&X)";
			// 
			// 編集ToolStripMenuItem
			// 
			this->編集ToolStripMenuItem->Name = L"編集ToolStripMenuItem";
			this->編集ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::E));
			this->編集ToolStripMenuItem->ShowShortcutKeys = false;
			this->編集ToolStripMenuItem->Size = System::Drawing::Size(79, 29);
			this->編集ToolStripMenuItem->Text = L"編集(&E)";
			this->編集ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::編集ToolStripMenuItem_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(337, 297);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"EffectMaker";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}
#pragma endregion
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		this->IsMdiContainer = true;
		this->WindowState = FormWindowState::Maximized;


		paramaterForm1->MdiParent = this;
		paramaterForm1->Show();


		paramaterForm2->MdiParent = this;
		paramaterForm2->Show();


		playerForm->MdiParent = this;
		playerForm->Show();

		effectForm->MdiParent = this;
		effectForm->Show();

		nodeForm->MdiParent = this;
		nodeForm->Show();

		imageForm->MdiParent = this;
		imageForm->Show();

		configForm->MdiParent = this;
	}
	public: int GetFrame()
	{
		return m_frame;
	}

	public: void SetFrame(int frame)
	{
		m_frame = frame;

	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		m_frame = playerForm->GetFrame();
		effectForm->SetFrame(m_frame);

		paramaterForm1->InfoUpdate(para1);
		paramaterForm2->InfoUpdate(para2);


		// アニメーションリセット時かアニメーション停止中ならエフェクトフォームの情報を更新
		if (m_frame == 30  || !playerForm->IsAnimating())
		{
			effectForm->SetInfo(para1, para2);
		}

		if (saveFlag)
		{
			static int frameCounter = 0;

			if (frameCounter == 0)
			{
				playerForm->SetFrame(1);
				effectForm->SetFrame(1);
				SetFrame(1);
				effectForm->DrawSaveMap();
			}
			else
			{
				effectForm->DrawSaveMap();
				SavePictboxImage(effectForm->GetMap(), "Export\\" + frameCounter + ".png");
			}

			frameCounter++;

			if (frameCounter > playerForm->GetTrackBarMax())
			{
				saveFlag = false;
				frameCounter = 0;
			}

			if (!saveFlag)
			{
				// 画像を結合する処理
				System::Drawing::Bitmap^ bmp;	// 完成形となるもの
												// 横に連結する	
				for (int i = 0; i < FrameCnt; i++)
				{
					// 1つ先の画像を読み込む
					System::Drawing::Bitmap^ bmpW = gcnew System::Drawing::Bitmap("Export\\" + (i + 1) + ".png");

					cnt++;
					bmp = ChainHorizontal(bmp, bmpW);
					// 6の倍数になったらListに追加
					if (cnt % ROW_NUM == 0)
					{
						bmpArray->Add((System::Object^)bmp);
						bmp = nullptr;
					}
				}

				// bmpの中身がnullptrになってない時
				if (bmp)
				{
					bmpArray->Add((System::Object^)bmp);
					bmp = nullptr;
				}
				// cntを6の倍数にする
				while (cnt % ROW_NUM != 0)
				{
					cnt++;
				}

				// 縦に連結する	 
				for (int i = 0; i < cnt / ROW_NUM; i++)
				{
					System::Drawing::Bitmap^ bmpH = (System::Drawing::Bitmap^)bmpArray[i];
					bmp = ChainVertical(bmp, bmpH);
				}
				// 1つにまとめる
				if (bmp)	bmp->Save("Effects\\Effect.png", System::Drawing::Imaging::ImageFormat::Png);

				// 初期化
				bmp = nullptr;
				cnt = 0;
				bmpArray->Clear();
			}
		}

	}
	private: void SavePictboxImage(Bitmap^ bmp, String^ file)
	{
		bmp->Save(file, System::Drawing::Imaging::ImageFormat::Png);
	}
	private: System::Void 出力ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		saveFlag = true;
	}

			 // 画像を保存
			 void SaveImage(Control^ c, std::string file)
			 {
				 int w = c->Size.Width; // コントロールの幅
				 int h = c->Size.Height; // コントロールの高さ

				 Bitmap^ bmp = gcnew Bitmap(w, h);
				 String^ str = gcnew String(file.c_str());
				 bmp->Save(str, System::Drawing::Imaging::ImageFormat::Png);
			 }

			 // 文字列の型を変換 ( System::String -> std::string )
			 void MarshalString(String ^ s, std::string& os)
			 {
				 using namespace Runtime::InteropServices;
				 const char* chars =
					 (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
				 os = chars;
				 Marshal::FreeHGlobal(IntPtr((void*)chars));
			 }

			 // 画像を横に連結
			 Bitmap^ ChainHorizontal(Bitmap^ img1, Bitmap^ img2)
			 {
				 int width;		// 横幅
				 int height;		// 縦幅
				 Bitmap^ img3;	// 連結したもの
				 Graphics^ g;	// グラフィック
								// データが一つの時
				 if (img1 == nullptr)
				 {
					 width = img2->Width;
					 height = img2->Height;
					 img3 = gcnew Bitmap(width, height);
					 g = Graphics::FromImage(img3);
					 g->DrawImage(img2, 0, 0);

					 return img3;
				 }
				 width = img1->Width + img2->Width;
				 height = img1->Height > img2->Height ? img1->Height : img2->Height;
				 img3 = gcnew Bitmap(width, height);
				 g = Graphics::FromImage(img3);

				 g->DrawImage(img1, 0, 0);
				 g->DrawImage(img2, img1->Width, 0);


				 return img3;
			 }

			 // 画像を縦に連結
			 Bitmap^ ChainVertical(Bitmap^ img1, Bitmap^ img2)
			 {
				 int width;		// 横幅
				 int height;		// 縦幅
				 Bitmap^ img3;	// 連結したもの
				 Graphics^ g;	// グラフィック
								// データが一つの時	
				 if (img1 == nullptr)
				 {
					 width = img2->Width;
					 height = img2->Height;
					 img3 = gcnew Bitmap(width, height);
					 g = Graphics::FromImage(img3);
					 g->DrawImage(img2, 0, 0);

					 return img3;
				 }
				 width = img1->Width > img2->Width ? img1->Width : img2->Width;
				 height = img1->Height + img2->Height;
				 img3 = gcnew Bitmap(width, height);
				 g = Graphics::FromImage(img3);
				 g->DrawImage(img1, 0, 0);
				 g->DrawImage(img2, 0, img1->Height);

				 return img3;
			 }
	private: System::Void 編集ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			
		if (configForm->Visible)
		{
			configForm->Hide();
		}
		else
		{
			configForm->Show();
		}

	}
};
}
