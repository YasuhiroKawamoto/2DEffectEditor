#pragma once

namespace My2DEffectEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ParameterForm1 の概要
	/// </summary>
	public ref class ParameterForm1 : public System::Windows::Forms::Form
	{

/// <summary>
/// ノードの発生数を取得
/// </summary>
	public: int GetNodeNumber()
	{
		return System::Convert::ToInt32(numericUpDown1->Value);
	}

	/// <summary>
	/// ノードの発生開始フレームを取得
	/// </summary>
	public: int GetNodeOccurFrame()
	{
		return System::Convert::ToInt32(numericUpDown2->Value);
	}

	/// <summary>
	/// ノードの発生終了フレームを取得
	/// </summary>
	public: int GetNodeVanishFrame()
	{
		return System::Convert::ToInt32(numericUpDown3->Value);
	}

	/// <summary>
	/// ノードの発生パターン(int)を取得
	/// </summary>
	public: int GetNodeOccurPattern()
	{
		return System::Convert::ToInt32(comboBox1->SelectedIndex);
	}

	public:
		ParameterForm1(void)
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
		~ParameterForm1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:








	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;

	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;








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
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->numericUpDown3);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->comboBox1);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->ImeMode = System::Windows::Forms::ImeMode::Alpha;
			this->groupBox1->Location = System::Drawing::Point(27, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(550, 246);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"発生";
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->numericUpDown3->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->numericUpDown3->Location = System::Drawing::Point(365, 102);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(97, 25);
			this->numericUpDown3->TabIndex = 2;
			this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(468, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 18);
			this->label5->TabIndex = 0;
			this->label5->Text = L"フレーム";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->numericUpDown2->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->numericUpDown2->Location = System::Drawing::Point(156, 102);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(97, 25);
			this->numericUpDown2->TabIndex = 1;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(128)));
			this->numericUpDown1->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->numericUpDown1->Location = System::Drawing::Point(156, 38);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 256, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(97, 25);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// comboBox1
			// 
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->ImeMode = System::Windows::Forms::ImeMode::Off;
			this->comboBox1->Location = System::Drawing::Point(156, 164);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(203, 26);
			this->comboBox1->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(32, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 18);
			this->label4->TabIndex = 0;
			this->label4->Text = L"発生パターン";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(265, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 18);
			this->label3->TabIndex = 0;
			this->label3->Text = L"フレーム　～";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"発生数";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 109);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(100, 18);
			this->label2->TabIndex = 0;
			this->label2->Text = L"発生フレーム";
			// 
			// ParameterForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(607, 344);
			this->ControlBox = false;
			this->Controls->Add(this->groupBox1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ParameterForm1";
			this->ShowInTaskbar = false;
			this->Text = L"ParameterForm1";
			this->Load += gcnew System::EventHandler(this, &ParameterForm1::ParameterForm1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void ParameterForm1_Load(System::Object^  sender, System::EventArgs^  e) {
		comboBox1->Items->Add(L"一方向");
		comboBox1->Items->Add(L"拡散");
		comboBox1->Items->Add(L"集約");
		comboBox1->Items->Add(L"なんかすげーやつ");

		comboBox1->DropDownStyle = ComboBoxStyle::DropDownList;

		comboBox1->SelectedIndex = 0;
	}
	};

}
