#pragma once

namespace My2DEffectEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ParameterForm2 の概要
	/// </summary>
	public ref class ParameterForm2 : public System::Windows::Forms::Form
	{
	public:
		ParameterForm2(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	/// <summary>
	/// 移動量を取得
	/// </summary>
	public: int GetMoveAmount()
	{
		return System::Convert::ToInt32(numericUpDown1->Value);
	}

	/// <summary>
	/// 移動量の誤差を取得
	/// </summary>
	public: int GetMoveAmountError()
	{
		return System::Convert::ToInt32(numericUpDown2->Value);
	}

	/// <summary>
	/// 発射方向(角度)を取得
	/// </summary>
	public: int GetMoveAngle()
	{
		return System::Convert::ToInt32(numericUpDown3->Value);
	}

	/// <summary>
	/// 発射方向のブレ(角度)を取得
	/// </summary>
	public: int GetMoveAngleError()
	{
		return System::Convert::ToInt32(numericUpDown4->Value);
	}

	/// <summary>
	/// X方向の拡大率を取得
	/// </summary>
	public: int GetScaleX()
	{
		return System::Convert::ToInt32(numericUpDown5->Value);
	}

	/// <summary>
	/// Y方向の拡大率を取得
	/// </summary>
	public: int GetScaleY()
	{
		return System::Convert::ToInt32(numericUpDown6->Value);
	}
	/// <summary>
	/// 画像の回転角(角度)を取得
	/// </summary>
	public: int GetImageRot()
	{
		return System::Convert::ToInt32(numericUpDown7->Value);
	}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~ParameterForm2()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^  label2;
	protected:

	protected:





	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;


	private: System::Windows::Forms::Label^  label3;




	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Label^  label4;



	private: System::Windows::Forms::Label^  label5;




	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Label^  label6;



	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown2;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown4;


	private: System::Windows::Forms::NumericUpDown^  numericUpDown3;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown7;




	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown5;

	private: System::Windows::Forms::NumericUpDown^  numericUpDown6;
private: System::Windows::Forms::Label^  label14;







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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDown6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->numericUpDown7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->BeginInit();
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(31, 173);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 18);
			this->label2->TabIndex = 0;
			this->label2->Text = L"発射方向";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->numericUpDown2);
			this->groupBox1->Controls->Add(this->numericUpDown4);
			this->groupBox1->Controls->Add(this->numericUpDown3);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->ImeMode = System::Windows::Forms::ImeMode::Alpha;
			this->groupBox1->Location = System::Drawing::Point(25, 22);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(499, 225);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"移動";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown1->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->numericUpDown1->Location = System::Drawing::Point(216, 38);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(90, 25);
			this->numericUpDown1->TabIndex = 0;
			this->numericUpDown1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &ParameterForm2::numericUpDown1_ValueChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(317, 45);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(118, 18);
			this->label9->TabIndex = 0;
			this->label9->Text = L"ドット／フレーム";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(255, 173);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(26, 18);
			this->label11->TabIndex = 0;
			this->label11->Text = L"±";
			// 
			// numericUpDown2
			// 
			this->numericUpDown2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown2->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->numericUpDown2->Location = System::Drawing::Point(216, 102);
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(90, 25);
			this->numericUpDown2->TabIndex = 1;
			this->numericUpDown2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// numericUpDown4
			// 
			this->numericUpDown4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown4->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->numericUpDown4->Location = System::Drawing::Point(287, 169);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 359, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(70, 25);
			this->numericUpDown4->TabIndex = 3;
			this->numericUpDown4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown3->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->numericUpDown3->Location = System::Drawing::Point(123, 169);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 359, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(70, 25);
			this->numericUpDown3->TabIndex = 2;
			this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(202, 173);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(26, 18);
			this->label10->TabIndex = 0;
			this->label10->Text = L"度";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(312, 109);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(26, 18);
			this->label7->TabIndex = 0;
			this->label7->Text = L"％";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(31, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 18);
			this->label3->TabIndex = 0;
			this->label3->Text = L"誤差(0％～100％)";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(31, 45);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(62, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"移動量";
			// 
			// groupBox2
			// 
			this->groupBox2->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox2->Controls->Add(this->numericUpDown5);
			this->groupBox2->Controls->Add(this->numericUpDown6);
			this->groupBox2->Controls->Add(this->label13);
			this->groupBox2->Controls->Add(this->label12);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->ImeMode = System::Windows::Forms::ImeMode::Alpha;
			this->groupBox2->Location = System::Drawing::Point(25, 280);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(499, 88);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"拡縮";
			// 
			// numericUpDown5
			// 
			this->numericUpDown5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown5->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->numericUpDown5->Location = System::Drawing::Point(117, 38);
			this->numericUpDown5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown5->Name = L"numericUpDown5";
			this->numericUpDown5->Size = System::Drawing::Size(90, 25);
			this->numericUpDown5->TabIndex = 4;
			this->numericUpDown5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown6->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->numericUpDown6->Location = System::Drawing::Point(345, 38);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(90, 25);
			this->numericUpDown6->TabIndex = 5;
			this->numericUpDown6->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(441, 40);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(26, 18);
			this->label13->TabIndex = 0;
			this->label13->Text = L"％";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(213, 40);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(26, 18);
			this->label12->TabIndex = 0;
			this->label12->Text = L"％";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(31, 40);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 18);
			this->label4->TabIndex = 0;
			this->label4->Text = L"X方向";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(268, 40);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(55, 18);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Y方向";
			// 
			// groupBox3
			// 
			this->groupBox3->BackColor = System::Drawing::SystemColors::Control;
			this->groupBox3->Controls->Add(this->numericUpDown7);
			this->groupBox3->Controls->Add(this->label8);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->ImeMode = System::Windows::Forms::ImeMode::Alpha;
			this->groupBox3->Location = System::Drawing::Point(25, 400);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(499, 86);
			this->groupBox3->TabIndex = 0;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"画像の回転";
			// 
			// numericUpDown7
			// 
			this->numericUpDown7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown7->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->numericUpDown7->Location = System::Drawing::Point(117, 33);
			this->numericUpDown7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 359, 0, 0, 0 });
			this->numericUpDown7->Name = L"numericUpDown7";
			this->numericUpDown7->Size = System::Drawing::Size(70, 25);
			this->numericUpDown7->TabIndex = 6;
			this->numericUpDown7->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(193, 40);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(26, 18);
			this->label8->TabIndex = 0;
			this->label8->Text = L"度";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(31, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(44, 18);
			this->label6->TabIndex = 0;
			this->label6->Text = L"角度";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(363, 173);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(26, 18);
			this->label14->TabIndex = 4;
			this->label14->Text = L"度";
			// 
			// ParameterForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(554, 548);
			this->ControlBox = false;
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ParameterForm2";
			this->ShowInTaskbar = false;
			this->Text = L"ParameterForm2";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown6))->EndInit();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown7))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion


private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
};
}
