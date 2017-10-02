#pragma once

#include <string>
#include <memory>
#include "Node.h"
#include "NodeManager.h"


namespace My2DEffectEditor {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;

	/// <summary>
	/// NodeForm の概要
	/// </summary>
	public ref class NodeForm : public System::Windows::Forms::Form
	{
	public:
		NodeForm(void)
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
		~NodeForm()
		{
			if (components)
			{
				delete components;
			}
			delete pNodeManager;
		}
	private: System::Windows::Forms::TreeView^  treeView1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;



	private: int i = 0;

			 //private: NodeManager* pNodeManager = NodeManager().GetInstance().get();
			 //private: std::unique_ptr<NodeManager> NodeM;
	private: NodeManager* pNodeManager = new NodeManager();
	private: Node* pNode;
	private: System::Windows::Forms::TextBox^  textBox1;



	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		// 文字列の型を変換
		void MarshalString(String ^ s, string& os) {
			using namespace Runtime::InteropServices;
			const char* chars =
				(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
			os = chars;
			Marshal::FreeHGlobal(IntPtr((void*)chars));
		}

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// treeView1
			// 
			this->treeView1->Cursor = System::Windows::Forms::Cursors::Default;
			this->treeView1->Location = System::Drawing::Point(36, 108);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(121, 219);
			this->treeView1->TabIndex = 0;
			this->treeView1->AfterSelect += gcnew System::Windows::Forms::TreeViewEventHandler(this, &NodeForm::treeView1_AfterSelect);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(1, -2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"新規";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NodeForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(82, -2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"子を追加";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &NodeForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(188, -2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 36);
			this->button3->TabIndex = 3;
			this->button3->Text = L"削除";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &NodeForm::button3_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(173, 108);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 198);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &NodeForm::textBox1_TextChanged_1);
			// 
			// NodeForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(10, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(297, 448);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->treeView1);
			this->Name = L"NodeForm";
			this->ShowInTaskbar = false;
			this->Text = L"NodeForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void treeView1_AfterSelect(System::Object^  sender, System::Windows::Forms::TreeViewEventArgs^  e) {
		if (e->Action == TreeViewAction::ByMouse)
		{
			// 選択
			string tag;
			MarshalString(e->Node->Tag->ToString(), tag);
			pNode = pNodeManager->SearchNode(tag);
			if (pNode != nullptr)
			{
				for (std::vector<Transform*>::size_type i = 0;
					i<pNode->GetTransform().size();
					i++)
				{
					textBox1->Text = pNode->GetTransform()[i]->GetRotate().ToString();
				}
				/*System::String^ s1 = gcnew System::String(pNode->GetTag().c_str());
				textBox1->Text = s1;*/
			}


		}
	}
	private: System::Void toolTip1_Popup(System::Object^  sender, System::Windows::Forms::PopupEventArgs^  e) {
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {

	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		if (this->treeView1->SelectedNode == nullptr)
		{
			i++;
			// 親ノード追加
			TreeNode^ node = gcnew TreeNode("File" + i);
			node->Tag = "File" + i;
			this->treeView1->Nodes->Add(node);
			string tag;
			MarshalString(node->Tag->ToString(), tag);
			pNodeManager->CreateNode(tag);
		}
		else
		{
			i++;
			// 親ノード挿入
			TreeNode^ node = gcnew TreeNode("File" + i);
			node->Tag = "File" + i;
			this->treeView1->Nodes->Insert(
				this->treeView1->SelectedNode->Index,
				node);
			this->treeView1->Select();
			string tag;
			MarshalString(node->Tag->ToString(), tag);
			pNodeManager->CreateNode(tag);
		}

	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		// 子ノード追加
		if (this->treeView1->SelectedNode != nullptr)
		{
			i++;
			TreeNode^ node = gcnew TreeNode("File" + i);
			node->Tag = "File" + i;
			this->treeView1->SelectedNode->Nodes->Add(
				node);
			this->treeView1->Select();
			string tag;
			MarshalString(node->Tag->ToString(), tag);
			pNodeManager->CreateNode(tag, pNode);
		}
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		// 選択ノード削除
		if (this->treeView1->SelectedNode != nullptr)
		{
			this->treeView1->SelectedNode->Remove();
			this->treeView1->Select();
			// 選択
			string tag;
			MarshalString(this->treeView1->SelectedNode->Tag->ToString(), tag);
			pNode = pNodeManager->SearchNode(tag);
			if (pNode != nullptr)
			{
				pNode = nullptr;
			}
		}
	}
	private: System::Void textBox1_TextChanged_1(System::Object^  sender, System::EventArgs^  e) {
	}
	};


}

