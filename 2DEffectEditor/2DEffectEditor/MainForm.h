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
	/// MainForm �̊T�v
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: �����ɃR���X�g���N�^�[ �R�[�h��ǉ����܂�
			//

		}


	protected:
		/// <summary>
		/// �g�p���̃��\�[�X�����ׂăN���[���A�b�v���܂��B
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
		ArrayList^ bmpArray = gcnew ArrayList();	// BMP�̔z��	
		int FrameCnt = 30;	// �t���[�����i�摜�̐��j	
		int cnt = 0;	// �J�E���^

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
	private: System::Windows::Forms::ToolStripMenuItem^ �t�@�C��FToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �V�KNToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �J��OToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �㏑���ۑ�SToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ���O��t���ĕۑ�AToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ �I��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �o��ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �ҏWToolStripMenuItem;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�[�ϐ��ł��B
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
		/// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->�t�@�C��FToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�V�KNToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�J��OToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�㏑���ۑ�SToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->���O��t���ĕۑ�AToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�o��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->�I��ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�ҏWToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->�t�@�C��FToolStripMenuItem,
					this->�ҏWToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::Professional;
			this->menuStrip1->Size = System::Drawing::Size(337, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// �t�@�C��FToolStripMenuItem
			// 
			this->�t�@�C��FToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(7) {
				this->�V�KNToolStripMenuItem,
					this->�J��OToolStripMenuItem, this->�㏑���ۑ�SToolStripMenuItem, this->���O��t���ĕۑ�AToolStripMenuItem, this->�o��ToolStripMenuItem, this->toolStripMenuItem1,
					this->�I��ToolStripMenuItem
			});
			this->�t�@�C��FToolStripMenuItem->Name = L"�t�@�C��FToolStripMenuItem";
			this->�t�@�C��FToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->�t�@�C��FToolStripMenuItem->ShowShortcutKeys = false;
			this->�t�@�C��FToolStripMenuItem->Size = System::Drawing::Size(94, 29);
			this->�t�@�C��FToolStripMenuItem->Text = L"�t�@�C��(&F)";
			// 
			// �V�KNToolStripMenuItem
			// 
			this->�V�KNToolStripMenuItem->Name = L"�V�KNToolStripMenuItem";
			this->�V�KNToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::N));
			this->�V�KNToolStripMenuItem->ShowShortcutKeys = false;
			this->�V�KNToolStripMenuItem->Size = System::Drawing::Size(237, 30);
			this->�V�KNToolStripMenuItem->Text = L"�V�K�쐬(&N)";
			// 
			// �J��OToolStripMenuItem
			// 
			this->�J��OToolStripMenuItem->Name = L"�J��OToolStripMenuItem";
			this->�J��OToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->�J��OToolStripMenuItem->ShowShortcutKeys = false;
			this->�J��OToolStripMenuItem->Size = System::Drawing::Size(237, 30);
			this->�J��OToolStripMenuItem->Text = L"�J��(&O)";
			// 
			// �㏑���ۑ�SToolStripMenuItem
			// 
			this->�㏑���ۑ�SToolStripMenuItem->Name = L"�㏑���ۑ�SToolStripMenuItem";
			this->�㏑���ۑ�SToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->�㏑���ۑ�SToolStripMenuItem->ShowShortcutKeys = false;
			this->�㏑���ۑ�SToolStripMenuItem->Size = System::Drawing::Size(237, 30);
			this->�㏑���ۑ�SToolStripMenuItem->Text = L"�㏑���ۑ�(&S)";
			// 
			// ���O��t���ĕۑ�AToolStripMenuItem
			// 
			this->���O��t���ĕۑ�AToolStripMenuItem->Name = L"���O��t���ĕۑ�AToolStripMenuItem";
			this->���O��t���ĕۑ�AToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::A));
			this->���O��t���ĕۑ�AToolStripMenuItem->ShowShortcutKeys = false;
			this->���O��t���ĕۑ�AToolStripMenuItem->Size = System::Drawing::Size(237, 30);
			this->���O��t���ĕۑ�AToolStripMenuItem->Text = L"���O��t���ĕۑ�(&A)";
			// 
			// �o��ToolStripMenuItem
			// 
			this->�o��ToolStripMenuItem->Name = L"�o��ToolStripMenuItem";
			this->�o��ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::E));
			this->�o��ToolStripMenuItem->ShowShortcutKeys = false;
			this->�o��ToolStripMenuItem->Size = System::Drawing::Size(237, 30);
			this->�o��ToolStripMenuItem->Text = L"�o��(&E)";
			this->�o��ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�o��ToolStripMenuItem_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(234, 6);
			// 
			// �I��ToolStripMenuItem
			// 
			this->�I��ToolStripMenuItem->Name = L"�I��ToolStripMenuItem";
			this->�I��ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::X));
			this->�I��ToolStripMenuItem->ShowShortcutKeys = false;
			this->�I��ToolStripMenuItem->Size = System::Drawing::Size(237, 30);
			this->�I��ToolStripMenuItem->Text = L"�I��(&X)";
			// 
			// �ҏWToolStripMenuItem
			// 
			this->�ҏWToolStripMenuItem->Name = L"�ҏWToolStripMenuItem";
			this->�ҏWToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::E));
			this->�ҏWToolStripMenuItem->ShowShortcutKeys = false;
			this->�ҏWToolStripMenuItem->Size = System::Drawing::Size(79, 29);
			this->�ҏWToolStripMenuItem->Text = L"�ҏW(&E)";
			this->�ҏWToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::�ҏWToolStripMenuItem_Click);
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


		// �A�j���[�V�������Z�b�g�����A�j���[�V������~���Ȃ�G�t�F�N�g�t�H�[���̏����X�V
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
				// �摜���������鏈��
				System::Drawing::Bitmap^ bmp;	// �����`�ƂȂ����
												// ���ɘA������	
				for (int i = 0; i < FrameCnt; i++)
				{
					// 1��̉摜��ǂݍ���
					System::Drawing::Bitmap^ bmpW = gcnew System::Drawing::Bitmap("Export\\" + (i + 1) + ".png");

					cnt++;
					bmp = ChainHorizontal(bmp, bmpW);
					// 6�̔{���ɂȂ�����List�ɒǉ�
					if (cnt % ROW_NUM == 0)
					{
						bmpArray->Add((System::Object^)bmp);
						bmp = nullptr;
					}
				}

				// bmp�̒��g��nullptr�ɂȂ��ĂȂ���
				if (bmp)
				{
					bmpArray->Add((System::Object^)bmp);
					bmp = nullptr;
				}
				// cnt��6�̔{���ɂ���
				while (cnt % ROW_NUM != 0)
				{
					cnt++;
				}

				// �c�ɘA������	 
				for (int i = 0; i < cnt / ROW_NUM; i++)
				{
					System::Drawing::Bitmap^ bmpH = (System::Drawing::Bitmap^)bmpArray[i];
					bmp = ChainVertical(bmp, bmpH);
				}
				// 1�ɂ܂Ƃ߂�
				if (bmp)	bmp->Save("Effects\\Effect.png", System::Drawing::Imaging::ImageFormat::Png);

				// ������
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
	private: System::Void �o��ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		saveFlag = true;
	}

			 // �摜��ۑ�
			 void SaveImage(Control^ c, std::string file)
			 {
				 int w = c->Size.Width; // �R���g���[���̕�
				 int h = c->Size.Height; // �R���g���[���̍���

				 Bitmap^ bmp = gcnew Bitmap(w, h);
				 String^ str = gcnew String(file.c_str());
				 bmp->Save(str, System::Drawing::Imaging::ImageFormat::Png);
			 }

			 // ������̌^��ϊ� ( System::String -> std::string )
			 void MarshalString(String ^ s, std::string& os)
			 {
				 using namespace Runtime::InteropServices;
				 const char* chars =
					 (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
				 os = chars;
				 Marshal::FreeHGlobal(IntPtr((void*)chars));
			 }

			 // �摜�����ɘA��
			 Bitmap^ ChainHorizontal(Bitmap^ img1, Bitmap^ img2)
			 {
				 int width;		// ����
				 int height;		// �c��
				 Bitmap^ img3;	// �A����������
				 Graphics^ g;	// �O���t�B�b�N
								// �f�[�^����̎�
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

			 // �摜���c�ɘA��
			 Bitmap^ ChainVertical(Bitmap^ img1, Bitmap^ img2)
			 {
				 int width;		// ����
				 int height;		// �c��
				 Bitmap^ img3;	// �A����������
				 Graphics^ g;	// �O���t�B�b�N
								// �f�[�^����̎�	
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
	private: System::Void �ҏWToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			
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
