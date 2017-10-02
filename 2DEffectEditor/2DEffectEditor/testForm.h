#pragma once
#include <string.h>

namespace My2DEffectEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// TestForm の概要
	/// </summary>
	public ref class TestForm : public System::Windows::Forms::Form
	{
	public:
		TestForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}


	private: bool saveFlag;

	public: bool GetSaveFlag()
	{
		return	saveFlag;
	}
	public: void SetSaveFlag(bool state)
	{
		saveFlag = state;
	}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~TestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;

	protected:

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(212, 89);
			this->button1->TabIndex = 0;
			this->button1->Text = L"n分割！";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TestForm::button1_Click);
			// 
			// TestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(240, 117);
			this->Controls->Add(this->button1);
			this->Name = L"TestForm";
			this->Text = L"TestForm";
			this->Load += gcnew System::EventHandler(this, &TestForm::TestForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		saveFlag = true;
	}
	private: System::Void TestForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
