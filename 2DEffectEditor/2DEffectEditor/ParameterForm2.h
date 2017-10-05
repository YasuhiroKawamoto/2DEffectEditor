#pragma once

//#include "NodeForm.h"	
#include <string>	
#include <memory>	
#include "Node.h"	
#include "NodeManager.h"	
#include "Vector2.h"

namespace My2DEffectEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	struct Parameter2
	{
		int moveAmount;			// 移動量
		int moveAmountError;	// 移動量誤差
		int angle;				// 発生終了フレーム
		int angleError;			// 発生パターン
		int scaleX;				// 縮小
		int scaleY;				// 拡大
		int ImageAngle;			// 画像の回転
	};

	/// <summary>
	/// ParameterForm2 の概要
	/// </summary>
	public ref class ParameterForm2 : public System::Windows::Forms::Form
	{
	public:
		static ParameterForm2^ GetInstance() {
			if (m_instance == nullptr)
			{
				return nullptr;
			}
			return m_instance;
		}
	private:
		static ParameterForm2^ m_instance;

	public:
		ParameterForm2(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
			m_instance = this;
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


			/// <summary>	
			/// 移動量を設定	
			/// </summary>	
	public: void SetMoveAmount(const int& value)
	{
		numericUpDown1->Value = value;
	}
			/// <summary>	
			/// 移動量の誤差を設定	
			/// </summary>	
	public: void SetMoveAmountError(const int& value)
	{
		numericUpDown2->Value = value;
	}
			/// <summary>	
			/// 発射方向(角度)を設定	
			/// </summary>	
	public: void SetMoveAngle(const int& value)
	{
		numericUpDown3->Value = value;
	}
			/// <summary>	
			/// 発射方向のブレ(角度)を設定	
			/// </summary>	
	public: void SetMoveAngleError(const int& value)
	{
		numericUpDown4->Value = value;
	}
			/// <summary>	
			/// X方向の拡大率を設定	
			/// </summary>	
	public: void SetScaleX(const int& value)
	{
		numericUpDown5->Value = value;
	}
			/// <summary>	
			/// Y方向の拡大率を設定	
			/// </summary>	
	public: void SetScaleY(const int value)
	{
		numericUpDown6->Value = value;
	}
			/// <summary>	
			/// 画像の回転角(角度)を設定	
			/// </summary>	
	public: void SetImageRot(const int value)
	{
		numericUpDown7->Value = value;
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

			 float scaleX = 0.0f;
			 float scaleY = 0.0f;

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
			this->label14 = (gcnew System::Windows::Forms::Label());
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
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(554, 225);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"移動";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(456, 170);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(26, 18);
			this->label14->TabIndex = 4;
			this->label14->Text = L"度";
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
			this->label11->Location = System::Drawing::Point(348, 170);
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
			this->numericUpDown4->Location = System::Drawing::Point(380, 166);
			this->numericUpDown4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 359, 0, 0, 0 });
			this->numericUpDown4->Name = L"numericUpDown4";
			this->numericUpDown4->Size = System::Drawing::Size(70, 25);
			this->numericUpDown4->TabIndex = 3;
			this->numericUpDown4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDown4->ValueChanged += gcnew System::EventHandler(this, &ParameterForm2::numericUpDown4_ValueChanged);
			// 
			// numericUpDown3
			// 
			this->numericUpDown3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown3->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->numericUpDown3->Location = System::Drawing::Point(216, 166);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 359, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->Size = System::Drawing::Size(70, 25);
			this->numericUpDown3->TabIndex = 2;
			this->numericUpDown3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDown3->ValueChanged += gcnew System::EventHandler(this, &ParameterForm2::numericUpDown3_ValueChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(295, 170);
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
			this->groupBox2->Location = System::Drawing::Point(12, 255);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(554, 88);
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
			this->numericUpDown5->ValueChanged += gcnew System::EventHandler(this, &ParameterForm2::numericUpDown5_ValueChanged);
			// 
			// numericUpDown6
			// 
			this->numericUpDown6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->numericUpDown6->ImeMode = System::Windows::Forms::ImeMode::Disable;
			this->numericUpDown6->Location = System::Drawing::Point(361, 38);
			this->numericUpDown6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDown6->Name = L"numericUpDown6";
			this->numericUpDown6->Size = System::Drawing::Size(90, 25);
			this->numericUpDown6->TabIndex = 5;
			this->numericUpDown6->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			this->numericUpDown6->ValueChanged += gcnew System::EventHandler(this, &ParameterForm2::numericUpDown6_ValueChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(457, 40);
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
			this->label5->Location = System::Drawing::Point(284, 40);
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
			this->groupBox3->Location = System::Drawing::Point(12, 363);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(554, 86);
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
			this->numericUpDown7->ValueChanged += gcnew System::EventHandler(this, &ParameterForm2::numericUpDown7_ValueChanged);
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
			// ParameterForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(578, 477);
			this->ControlBox = false;
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Location = System::Drawing::Point(925, 180);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"ParameterForm2";
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
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

		public: void InfoUpdate(Parameter2* pm2)
		{
			pm2->angle = this->GetMoveAngle();
			pm2->angleError = this->GetMoveAngleError();
			pm2->ImageAngle = this->GetImageRot();
			pm2->moveAmount = this->GetMoveAmount();
			pm2->moveAmountError = this->GetMoveAmountError();
			pm2->scaleX = this->GetScaleX();
			pm2->scaleY = this->GetScaleY();
		}
				// 移動量
		private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			for (vector<Transform>::size_type i = 0; i < NodeManager::GetInstance()->GetNode()->GetTransform().size(); i++)
			{
				NodeManager::GetInstance()->GetNode()->GetTransform()[i]->SetMoveAmount(GetMoveAmount());
			}
		}
				 // 移動量誤差
		private: System::Void numericUpDown2_ValueChanged(System::Object^  sender, System::EventArgs^  e) {

		}
				 // 発射方向
		private: System::Void numericUpDown3_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			for (vector<Transform>::size_type i = 0; i < NodeManager::GetInstance()->GetNode()->GetTransform().size(); i++)
			{
				NodeManager::GetInstance()->GetNode()->GetTransform()[i]->SetMoveAngle(GetMoveAngle());
			}
		}
				 // 発射方向+-
		private: System::Void numericUpDown4_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		}
				 // 拡縮X
		private: System::Void numericUpDown5_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			scaleX = (float)GetScaleX();
			Vector2 vec2;
			vec2.x = scaleX;
			vec2.y = scaleY;
			for (vector<Transform>::size_type i = 0; i < NodeManager::GetInstance()->GetNode()->GetTransform().size(); i++)
			{
				NodeManager::GetInstance()->GetNode()->GetTransform()[i]->SetScale(vec2);
			}
		}
				 // 拡縮Y
		private: System::Void numericUpDown6_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			scaleY = (float)GetScaleY();
			Vector2 vec2;
			vec2.x = scaleX;
			vec2.y = scaleY;
			for (vector<Transform>::size_type i = 0; i < NodeManager::GetInstance()->GetNode()->GetTransform().size(); i++)
			{
				NodeManager::GetInstance()->GetNode()->GetTransform()[i]->SetScale(vec2);
			}
		}
				 // 画像の回転
		private: System::Void numericUpDown7_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
			for (vector<Transform>::size_type i = 0; i < NodeManager::GetInstance()->GetNode()->GetTransform().size(); i++)
			{
				NodeManager::GetInstance()->GetNode()->GetTransform()[i]->SetRotate(GetImageRot());
			}
		}
};
}
