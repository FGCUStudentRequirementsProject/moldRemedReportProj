#pragma once

namespace ProjectPrototype {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MenuStrip^ menuStrip2;
	private: System::Windows::Forms::ToolStripMenuItem^ homeToolStripMenuItem;





	private: System::Windows::Forms::ToolStripMenuItem^ recentFilesToolStripMenuItem;


	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;

	private: System::Windows::Forms::ToolStripMenuItem^ uploadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exportToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ newToolStripMenuItem;



	private: System::Windows::Forms::TextBox^ search_template_bar;
	private: System::Windows::Forms::Button^ SearchTemplatesButton;


	private: System::Windows::Forms::ListView^ Recent_File_View;

	private: System::Windows::Forms::ColumnHeader^ Name_Header;



	private: System::Windows::Forms::ColumnHeader^ File_Type_Header;
	private: System::Windows::Forms::ColumnHeader^ Date_Header;
	private: System::Windows::Forms::Label^ Recent_File_Header;



	private: System::Windows::Forms::ListView^ search_template_list;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;






	private: System::ComponentModel::IContainer^ components;
	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::ListViewItem^ listViewItem1 = (gcnew System::Windows::Forms::ListViewItem(gcnew cli::array< System::String^  >(1) { L"Report - Lily Jacobs (Sample)" },
				-1, System::Drawing::Color::Empty, System::Drawing::Color::Empty, (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular,
					System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)))));
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip2 = (gcnew System::Windows::Forms::MenuStrip());
			this->homeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->recentFilesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->newToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->uploadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exportToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->search_template_bar = (gcnew System::Windows::Forms::TextBox());
			this->SearchTemplatesButton = (gcnew System::Windows::Forms::Button());
			this->Recent_File_View = (gcnew System::Windows::Forms::ListView());
			this->Name_Header = (gcnew System::Windows::Forms::ColumnHeader());
			this->File_Type_Header = (gcnew System::Windows::Forms::ColumnHeader());
			this->Date_Header = (gcnew System::Windows::Forms::ColumnHeader());
			this->Recent_File_Header = (gcnew System::Windows::Forms::Label());
			this->search_template_list = (gcnew System::Windows::Forms::ListView());
			this->menuStrip2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip2
			// 
			this->menuStrip2->GripMargin = System::Windows::Forms::Padding(2, 2, 0, 2);
			this->menuStrip2->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip2->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->homeToolStripMenuItem,
					this->uploadToolStripMenuItem, this->exportToolStripMenuItem
			});
			this->menuStrip2->Location = System::Drawing::Point(0, 0);
			this->menuStrip2->Name = L"menuStrip2";
			this->menuStrip2->Padding = System::Windows::Forms::Padding(8, 2, 0, 2);
			this->menuStrip2->Size = System::Drawing::Size(1332, 33);
			this->menuStrip2->TabIndex = 1;
			this->menuStrip2->Text = L"F";
			this->menuStrip2->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MainForm::menuStrip2_ItemClicked);
			// 
			// homeToolStripMenuItem
			// 
			this->homeToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->recentFilesToolStripMenuItem,
					this->newToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->homeToolStripMenuItem->Name = L"homeToolStripMenuItem";
			this->homeToolStripMenuItem->Size = System::Drawing::Size(77, 29);
			this->homeToolStripMenuItem->Text = L"Home";
			this->homeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::homeToolStripMenuItem_Click);
			// 
			// recentFilesToolStripMenuItem
			// 
			this->recentFilesToolStripMenuItem->Name = L"recentFilesToolStripMenuItem";
			this->recentFilesToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->recentFilesToolStripMenuItem->Text = L"Recent Files";
			// 
			// newToolStripMenuItem
			// 
			this->newToolStripMenuItem->Name = L"newToolStripMenuItem";
			this->newToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->newToolStripMenuItem->Text = L"New";
			this->newToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::newToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(270, 34);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::exitToolStripMenuItem_Click);
			// 
			// uploadToolStripMenuItem
			// 
			this->uploadToolStripMenuItem->Name = L"uploadToolStripMenuItem";
			this->uploadToolStripMenuItem->Size = System::Drawing::Size(159, 29);
			this->uploadToolStripMenuItem->Text = L"Import Template";
			this->uploadToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::uploadToolStripMenuItem_Click);
			// 
			// exportToolStripMenuItem
			// 
			this->exportToolStripMenuItem->Name = L"exportToolStripMenuItem";
			this->exportToolStripMenuItem->Size = System::Drawing::Size(79, 29);
			this->exportToolStripMenuItem->Text = L"Export";
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MainForm::openFileDialog1_FileOk);
			// 
			// search_template_bar
			// 
			this->search_template_bar->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F));
			this->search_template_bar->Location = System::Drawing::Point(220, 38);
			this->search_template_bar->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->search_template_bar->Multiline = true;
			this->search_template_bar->Name = L"search_template_bar";
			this->search_template_bar->Size = System::Drawing::Size(896, 26);
			this->search_template_bar->TabIndex = 2;
			this->search_template_bar->Text = L"Search";
			this->search_template_bar->TextChanged += gcnew System::EventHandler(this, &MainForm::textBox1_TextChanged);
			// 
			// SearchTemplatesButton
			// 
			this->SearchTemplatesButton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F));
			this->SearchTemplatesButton->Location = System::Drawing::Point(1122, 31);
			this->SearchTemplatesButton->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->SearchTemplatesButton->Name = L"SearchTemplatesButton";
			this->SearchTemplatesButton->Size = System::Drawing::Size(105, 35);
			this->SearchTemplatesButton->TabIndex = 3;
			this->SearchTemplatesButton->Text = L"Search";
			this->SearchTemplatesButton->UseVisualStyleBackColor = true;
			this->SearchTemplatesButton->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// Recent_File_View
			// 
			this->Recent_File_View->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->Name_Header,
					this->File_Type_Header, this->Date_Header
			});
			this->Recent_File_View->Cursor = System::Windows::Forms::Cursors::Cross;
			this->Recent_File_View->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F));
			this->Recent_File_View->FullRowSelect = true;
			this->Recent_File_View->HideSelection = false;
			this->Recent_File_View->HoverSelection = true;
			this->Recent_File_View->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->Recent_File_View->Items->AddRange(gcnew cli::array< System::Windows::Forms::ListViewItem^  >(1) { listViewItem1 });
			this->Recent_File_View->LabelEdit = true;
			this->Recent_File_View->Location = System::Drawing::Point(220, 425);
			this->Recent_File_View->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->Recent_File_View->Name = L"Recent_File_View";
			this->Recent_File_View->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Recent_File_View->Size = System::Drawing::Size(896, 392);
			this->Recent_File_View->TabIndex = 4;
			this->Recent_File_View->UseCompatibleStateImageBehavior = false;
			this->Recent_File_View->View = System::Windows::Forms::View::Details;
			this->Recent_File_View->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::Recent_File_View_SelectedIndexChanged);
			this->Recent_File_View->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::Recent_File_View_MouseDoubleClick);
			// 
			// Name_Header
			// 
			this->Name_Header->Tag = L"";
			this->Name_Header->Text = L"Name";
			this->Name_Header->Width = 391;
			// 
			// File_Type_Header
			// 
			this->File_Type_Header->Text = L"FileType";
			this->File_Type_Header->Width = 244;
			// 
			// Date_Header
			// 
			this->Date_Header->Text = L"Date";
			this->Date_Header->Width = 356;
			// 
			// Recent_File_Header
			// 
			this->Recent_File_Header->AutoSize = true;
			this->Recent_File_Header->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F));
			this->Recent_File_Header->Location = System::Drawing::Point(213, 382);
			this->Recent_File_Header->Name = L"Recent_File_Header";
			this->Recent_File_Header->Size = System::Drawing::Size(164, 38);
			this->Recent_File_Header->TabIndex = 5;
			this->Recent_File_Header->Text = L"Recent Files";
			this->Recent_File_Header->Click += gcnew System::EventHandler(this, &MainForm::label1_Click);
			// 
			// search_template_list
			// 
			this->search_template_list->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F));
			this->search_template_list->FullRowSelect = true;
			this->search_template_list->HideSelection = false;
			this->search_template_list->Location = System::Drawing::Point(220, 69);
			this->search_template_list->Margin = System::Windows::Forms::Padding(3, 5, 3, 5);
			this->search_template_list->Name = L"search_template_list";
			this->search_template_list->Size = System::Drawing::Size(895, 202);
			this->search_template_list->TabIndex = 6;
			this->search_template_list->UseCompatibleStateImageBehavior = false;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1332, 815);
			this->ControlBox = false;
			this->Controls->Add(this->search_template_list);
			this->Controls->Add(this->Recent_File_Header);
			this->Controls->Add(this->Recent_File_View);
			this->Controls->Add(this->SearchTemplatesButton);
			this->Controls->Add(this->search_template_bar);
			this->Controls->Add(this->menuStrip2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TSI Document/Template Editor";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->menuStrip2->ResumeLayout(false);
			this->menuStrip2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void toolStripComboBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

private: System::Void menuStrip2_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
}
private: System::Void homeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
}

private: System::Void uploadToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenWindow(TmpMan);
	this->Hide();
}
private: System::Void reportToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void toolStripComboBox1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	// when clicking the seach bar list box should show the template list_view

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Recent_File_View_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) 
{
		//selecting the item on the list 
}
private: System::Void browseToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	CloseWindows();
}
private: System::Void newToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	OpenWindow(DocEtr);
	this->Hide();
}
private: System::Void Recent_File_View_MouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	OpenWindow(DocEtr);
	this->Hide();
}
};
}
