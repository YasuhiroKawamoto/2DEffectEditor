#pragma once

namespace My2DEffectEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ImageForm の概要
	/// </summary>
	public ref class ImageForm : public System::Windows::Forms::Form
	{
	public:
		ImageForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

		/// <summary>
		/// 不透明度を取得
		/// </summary>
	public: int GetStartOpacity()
	{
		return System::Convert::ToInt32(numericUpDown1->Value);
	}

			/// <summary>
			/// 不透明度を取得
			/// </summary>
	public: int GetEndOpacity()
	{
		return System::Convert::ToInt32(numericUpDown2->Value);
	}


	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~ImageForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected:
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->ImeMode = System::Windows::Forms::ImeMode::Alpha;
			this->groupBox1->Location = System::Drawing::Point(28, 125);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(335, 152);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"画像の不透明度";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->numericUpDown2->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->numericUpDown2->Location = System::Drawing::Point(156, 99);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(97, 25);
			this->numericUpDown2->TabIndex = 1;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(259, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(26, 18);
			this->label2->TabIndex = 2;
			this->label2->Text = L"％";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(49, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(62, 18);
			this->label4->TabIndex = 3;
			this->label4->Text = L"終了時";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->numericUpDown1->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->numericUpDown1->Location = System::Drawing::Point(156, 38);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(97, 25);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &ImageForm::numericUpDown1_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(259, 40);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(26, 18);
			this->label3->TabIndex = 0;
			this->label3->Text = L"％";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(49, 40);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"開始時";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->button1->Location = System::Drawing::Point(28, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(181, 40);
			this->button1->TabIndex = 2;
			this->button1->Text = L"画像読み込み";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &ImageForm::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// ImageForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(378, 354);
			this->ControlBox = false;
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ImageForm";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->Text = L"ImageForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ filename = openFileDialog1->FileName;
			try {
				// ノードのイメージを設定する
				// 選択されているノードのイメージ = Image::FromFile(filename);
			}
			catch (Exception^ ex) {
				;
			}
		}
	}
	};
}
