#pragma once

namespace ProjectPrototype {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TemplateEditor
	/// </summary>
	public ref class TemplateEditor : public System::Windows::Forms::Form
	{
	public:
		TemplateEditor(void)
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
		~TemplateEditor()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exportToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripComboBox^ toolStripComboBox1;
	private: System::Windows::Forms::ToolStripComboBox^ toolStripComboBox2;
	private: System::Windows::Forms::ToolStripButton^ toolStripButton1;
	private: System::Windows::Forms::ToolStripMenuItem^ addElementToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ insertImageBoxToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ insertTextBoxToolStripMenuItem;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TemplateEditor::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exportToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->addElementToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insertImageBoxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->insertTextBoxToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->toolStripComboBox1 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->toolStripComboBox2 = (gcnew System::Windows::Forms::ToolStripComboBox());
			this->toolStripButton1 = (gcnew System::Windows::Forms::ToolStripButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->toolStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->addElementToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1239, 33);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->exportToolStripMenuItem1,
					this->saveToolStripMenuItem, this->saveAsToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(54, 29);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// exportToolStripMenuItem1
			// 
			this->exportToolStripMenuItem1->Name = L"exportToolStripMenuItem1";
			this->exportToolStripMenuItem1->Size = System::Drawing::Size(176, 34);
			this->exportToolStripMenuItem1->Text = L"Export";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(176, 34);
			this->saveToolStripMenuItem->Text = L"Save";
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(176, 34);
			this->saveAsToolStripMenuItem->Text = L"Save As";
			// 
			// addElementToolStripMenuItem
			// 
			this->addElementToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->insertImageBoxToolStripMenuItem,
					this->insertTextBoxToolStripMenuItem
			});
			this->addElementToolStripMenuItem->Name = L"addElementToolStripMenuItem";
			this->addElementToolStripMenuItem->Size = System::Drawing::Size(130, 29);
			this->addElementToolStripMenuItem->Text = L"Add Element";
			// 
			// insertImageBoxToolStripMenuItem
			// 
			this->insertImageBoxToolStripMenuItem->Name = L"insertImageBoxToolStripMenuItem";
			this->insertImageBoxToolStripMenuItem->Size = System::Drawing::Size(247, 34);
			this->insertImageBoxToolStripMenuItem->Text = L"Insert Image Box";
			// 
			// insertTextBoxToolStripMenuItem
			// 
			this->insertTextBoxToolStripMenuItem->Name = L"insertTextBoxToolStripMenuItem";
			this->insertTextBoxToolStripMenuItem->Size = System::Drawing::Size(247, 34);
			this->insertTextBoxToolStripMenuItem->Text = L"Insert Text Box";
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(24, 24);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->toolStripComboBox1,
					this->toolStripComboBox2, this->toolStripButton1
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 33);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(1239, 34);
			this->toolStrip1->TabIndex = 1;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// toolStripComboBox1
			// 
			this->toolStripComboBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripComboBox1->Name = L"toolStripComboBox1";
			this->toolStripComboBox1->Size = System::Drawing::Size(121, 34);
			this->toolStripComboBox1->Text = L"Font";
			// 
			// toolStripComboBox2
			// 
			this->toolStripComboBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripComboBox2->Name = L"toolStripComboBox2";
			this->toolStripComboBox2->Size = System::Drawing::Size(121, 34);
			this->toolStripComboBox2->Text = L"Size";
			// 
			// toolStripButton1
			// 
			this->toolStripButton1->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->toolStripButton1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"toolStripButton1.Image")));
			this->toolStripButton1->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->toolStripButton1->Name = L"toolStripButton1";
			this->toolStripButton1->Size = System::Drawing::Size(162, 29);
			this->toolStripButton1->Text = L"Template Manager";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(101, 107);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(1042, 205);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Placeholder sample text";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(105, 329);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(248, 238);
			this->pictureBox1->TabIndex = 3;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(105, 574);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(149, 20);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Sample caption text";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(359, 329);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(784, 265);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Placeholder sample text";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(105, 605);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(1042, 205);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Placeholder sample text";
			// 
			// TemplateEditor
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1239, 981);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->toolStrip1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"TemplateEditor";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TemplateEditor";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
