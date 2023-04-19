#pragma once

namespace ProjectPrototype {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for DocEditor
	/// </summary>
	public ref class DocEditor : public System::Windows::Forms::Form
	{
	public:
		DocEditor(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~DocEditor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ changeTemplateToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exportToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ insertImagesToolStripMenuItem;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ insertPDFToolStripMenuItem;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DocEditor::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->changeTemplateToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insertImagesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->insertPDFToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->fileToolStripMenuItem,
					this->exportToolStripMenuItem, this->insertImagesToolStripMenuItem, this->insertPDFToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(6, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(1300, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->saveToolStripMenuItem,
					this->saveAsToolStripMenuItem, this->exitToolStripMenuItem, this->changeTemplateToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(54, 29);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(250, 34);
			this->saveToolStripMenuItem->Text = L"Save";
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(250, 34);
			this->saveAsToolStripMenuItem->Text = L"Save As";
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(250, 34);
			this->exitToolStripMenuItem->Text = L"Exit";
			// 
			// changeTemplateToolStripMenuItem
			// 
			this->changeTemplateToolStripMenuItem->Name = L"changeTemplateToolStripMenuItem";
			this->changeTemplateToolStripMenuItem->Size = System::Drawing::Size(250, 34);
			this->changeTemplateToolStripMenuItem->Text = L"Change Template";
			// 
			// exportToolStripMenuItem
			// 
			this->exportToolStripMenuItem->Name = L"exportToolStripMenuItem";
			this->exportToolStripMenuItem->Size = System::Drawing::Size(79, 29);
			this->exportToolStripMenuItem->Text = L"Export";
			// 
			// insertImagesToolStripMenuItem
			// 
			this->insertImagesToolStripMenuItem->Name = L"insertImagesToolStripMenuItem";
			this->insertImagesToolStripMenuItem->Size = System::Drawing::Size(135, 29);
			this->insertImagesToolStripMenuItem->Text = L"Insert Images";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(18, 60);
			this->richTextBox1->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(1262, 769);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// insertPDFToolStripMenuItem
			// 
			this->insertPDFToolStripMenuItem->Name = L"insertPDFToolStripMenuItem";
			this->insertPDFToolStripMenuItem->Size = System::Drawing::Size(109, 29);
			this->insertPDFToolStripMenuItem->Text = L"Insert PDF";
			// 
			// DocEditor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1300, 849);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"DocEditor";
			this->Text = L"DocEditor";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
