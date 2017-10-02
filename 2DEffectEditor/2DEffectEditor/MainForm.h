#pragma once

#include "ParameterForm1.h"
#include "ParameterForm2.h"
#include "ConfigForm.h"
#include "EffectForm.h"
#include "PlayerForm.h"
#include "NodeForm.h"

namespace My2DEffectEditor {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

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

		ParameterForm1^ paramaterForm1 = gcnew ParameterForm1;
		ParameterForm2^ paramaterForm2 = gcnew ParameterForm2;
		PlayerForm^ playerForm = gcnew PlayerForm;
		EffectForm^ effectForm = gcnew EffectForm;
		NodeForm^ nodeForm = gcnew NodeForm;


	private: System::Windows::Forms::Timer^  timer1;
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
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 16;
			this->timer1->Tick += gcnew System::EventHandler(this, &MainForm::timer1_Tick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(278, 244);
			this->DoubleBuffered = true;
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);

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
	}
	};
}
