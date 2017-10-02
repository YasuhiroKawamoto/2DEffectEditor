#pragma once

#include <string>

namespace My2DEffectEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	const int ROW_NUM = 5;

	/// <summary>
	/// SaveControlImage �̊T�v
	/// </summary>
	public ref class SaveControlImage : public System::Windows::Forms::Form
	{
	public:
		SaveControlImage(void)
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
		~SaveControlImage()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	private: System::Windows::Forms::Button^  button2;

	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// �K�v�ȃf�U�C�i�[�ϐ��ł��B
		/// </summary>

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

	private: ArrayList^ bmpArray = gcnew ArrayList();	// BMP�̔z��
	private: int FrameCnt = 30;	// �t���[�����i�摜�̐��j
	private: int cnt = 0;		// �J�E���^

#pragma region Windows Form Designer generated code
								/// <summary>
								/// �f�U�C�i�[ �T�|�[�g�ɕK�v�ȃ��\�b�h�ł��B���̃��\�b�h�̓��e��
								/// �R�[�h �G�f�B�^�[�ŕύX���Ȃ��ł��������B
								/// </summary>
			 void InitializeComponent(void)
			 {
				 this->button2 = (gcnew System::Windows::Forms::Button());
				 this->SuspendLayout();
				 // 
				 // button2
				 // 
				 this->button2->Location = System::Drawing::Point(353, 165);
				 this->button2->Name = L"button2";
				 this->button2->Size = System::Drawing::Size(75, 36);
				 this->button2->TabIndex = 2;
				 this->button2->Text = L"�o��";
				 this->button2->UseVisualStyleBackColor = true;
				 this->button2->Click += gcnew System::EventHandler(this, &SaveControlImage::button2_Click);
				 // 
				 // SaveControlImage
				 // 
				 this->ClientSize = System::Drawing::Size(451, 412);
				 this->Controls->Add(this->button2);
				 this->Name = L"SaveControlImage";
				 this->Load += gcnew System::EventHandler(this, &SaveControlImage::SaveControlImage_Load);
				 this->ResumeLayout(false);

			 }
#pragma endregion

	private: System::Void SaveControlImage_Load(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		// �L���v�`���[
		//a++;
		//std::string num;
		//MarshalString(a.ToString(), num);
		//SaveImage(monthCalendar1, "Resources\\" + num + ".png"); // �J�����_�[
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		// �摜���������鏈��
		System::Drawing::Bitmap^ bmp;	// �����`�ƂȂ����
										// ���ɘA������	
		for (int i = 0; i < FrameCnt; i++)
		{
			// 1��̉摜��ǂݍ���
			System::Drawing::Bitmap^ bmpW = gcnew System::Drawing::Bitmap("Resources\\" + (i + 1) + ".png");

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
		if (bmp)	bmp->Save("Resources\\Effects\\Effect.png", System::Drawing::Imaging::ImageFormat::Png);

		// ������
		bmp = nullptr;
		cnt = 0;
		bmpArray->Clear();

		// ��񂲂Ƃɏo�͂��ĂȂ���
		// �摜������
		//System::Drawing::Bitmap^ bmp;	// �����`�ƂȂ����
		//bmp = gcnew System::Drawing::Bitmap("Resources\\1.png");
		//// ���ɘA������	
		//for (int i = 0; i < FrameCnt; i++)
		//{			
		//	// 1��̉摜��ǂݍ���
		//	System::Drawing::Bitmap^ bmpW = gcnew System::Drawing::Bitmap("Resources\\" + (i + 1) + ".png");
		//	cnt++;
		//	if(i != 0) bmp = ChainHorizontal(bmp, bmpW);
		//	// 6�̔{���ɂȂ������s�������o��
		//	if (cnt % ROW_NUM == 0)
		//	{
		//		bmp->Save("Resources\\Effect" + cnt / ROW_NUM + ".png", System::Drawing::Imaging::ImageFormat::Png);
		//		bmp = nullptr;
		//	}	
		//}
		//// 6�̔{���ł͂Ȃ�bmp�̒��g��nullptr����Ȃ��Ƃ� 
		//if (bmp)
		//{
		//	bmp->Save("Resources\\Effect" + cnt / ROW_NUM + ".png", System::Drawing::Imaging::ImageFormat::Png);
		//	bmp = nullptr;
		//}
		//// �c�ɘA������	 
		//for (int i = 0; i < cnt / ROW_NUM; i++)
		//{
		//	// 1��̉摜��ǂݍ���
		//	System::Drawing::Bitmap^ bmpH = gcnew System::Drawing::Bitmap("Resources\\Effect" + (i + 1) + ".png");
		//	bmp = ChainVertical(bmp, bmpH);
		//}
		//// 1�ɂ܂Ƃ߂�
		//bmp->Save("Resources\\Effects\\Effect.png", System::Drawing::Imaging::ImageFormat::Png);
	}

	};
}
