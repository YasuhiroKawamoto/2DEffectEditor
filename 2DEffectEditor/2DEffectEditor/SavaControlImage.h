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
	/// SaveControlImage の概要
	/// </summary>
	public ref class SaveControlImage : public System::Windows::Forms::Form
	{
	public:
		SaveControlImage(void)
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
		/// 必要なデザイナー変数です。
		/// </summary>

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

	private: ArrayList^ bmpArray = gcnew ArrayList();	// BMPの配列
	private: int FrameCnt = 30;	// フレーム数（画像の数）
	private: int cnt = 0;		// カウンタ

#pragma region Windows Form Designer generated code
								/// <summary>
								/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
								/// コード エディターで変更しないでください。
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
				 this->button2->Text = L"出力";
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
		// キャプチャー
		//a++;
		//std::string num;
		//MarshalString(a.ToString(), num);
		//SaveImage(monthCalendar1, "Resources\\" + num + ".png"); // カレンダー
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		// 画像を結合する処理
		System::Drawing::Bitmap^ bmp;	// 完成形となるもの
										// 横に連結する	
		for (int i = 0; i < FrameCnt; i++)
		{
			// 1つ先の画像を読み込む
			System::Drawing::Bitmap^ bmpW = gcnew System::Drawing::Bitmap("Resources\\" + (i + 1) + ".png");

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
		if (bmp)	bmp->Save("Resources\\Effects\\Effect.png", System::Drawing::Imaging::ImageFormat::Png);

		// 初期化
		bmp = nullptr;
		cnt = 0;
		bmpArray->Clear();

		// 一列ごとに出力してつなげる
		// 画像を結合
		//System::Drawing::Bitmap^ bmp;	// 完成形となるもの
		//bmp = gcnew System::Drawing::Bitmap("Resources\\1.png");
		//// 横に連結する	
		//for (int i = 0; i < FrameCnt; i++)
		//{			
		//	// 1つ先の画像を読み込む
		//	System::Drawing::Bitmap^ bmpW = gcnew System::Drawing::Bitmap("Resources\\" + (i + 1) + ".png");
		//	cnt++;
		//	if(i != 0) bmp = ChainHorizontal(bmp, bmpW);
		//	// 6の倍数になったら一行分書き出す
		//	if (cnt % ROW_NUM == 0)
		//	{
		//		bmp->Save("Resources\\Effect" + cnt / ROW_NUM + ".png", System::Drawing::Imaging::ImageFormat::Png);
		//		bmp = nullptr;
		//	}	
		//}
		//// 6の倍数ではなくbmpの中身がnullptrじゃないとき 
		//if (bmp)
		//{
		//	bmp->Save("Resources\\Effect" + cnt / ROW_NUM + ".png", System::Drawing::Imaging::ImageFormat::Png);
		//	bmp = nullptr;
		//}
		//// 縦に連結する	 
		//for (int i = 0; i < cnt / ROW_NUM; i++)
		//{
		//	// 1つ先の画像を読み込む
		//	System::Drawing::Bitmap^ bmpH = gcnew System::Drawing::Bitmap("Resources\\Effect" + (i + 1) + ".png");
		//	bmp = ChainVertical(bmp, bmpH);
		//}
		//// 1つにまとめる
		//bmp->Save("Resources\\Effects\\Effect.png", System::Drawing::Imaging::ImageFormat::Png);
	}

	};
}
