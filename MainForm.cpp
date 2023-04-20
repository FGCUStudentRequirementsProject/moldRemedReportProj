enum FormNames {
    Home,
    TmpMan,
    TmpEtr,
    ImgMan,
    DocEtr
};

void OpenWindow(FormNames WindowID);
void CloseWindows();

#include "ImageManager.h"
#include "TemplateEditor1.h"
#include "Template Manager.h"
#include "MainForm.h"
#include "DocEditor.h"


ref class CurrentForms
{
public:
    CurrentForms(void) // Default Constructor
    {
        System::Windows::Forms::Application::EnableVisualStyles();
        System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(true);
    }
    static ProjectPrototype::MainForm^ home = gcnew ProjectPrototype::MainForm;
    static ProjectPrototype::ImageManager^ img = gcnew ProjectPrototype::ImageManager;
    static ProjectPrototype::DocEditor^ doc = gcnew ProjectPrototype::DocEditor;
    static ProjectPrototype::TemplateEditor^ tpe = gcnew ProjectPrototype::TemplateEditor;
    static ProjectPrototype::TemplateManager^ tpm = gcnew ProjectPrototype::TemplateManager;
};

int main()
{
	System::Windows::Forms::Application::Run(CurrentForms::home);
}

void OpenWindow(FormNames WindowID)
{
    switch (WindowID)
    {
    case Home:
        CurrentForms::home->Show();
        break;
    case TmpMan:
        CurrentForms::tpm->Show();
        break;
    case TmpEtr:
        CurrentForms::tpe->Show();
        break;
    case ImgMan:
        CurrentForms::img->Show();
        break;
    case DocEtr:
        CurrentForms::doc->Show();
    }
}

void CloseWindows() {
    CurrentForms::home->Close();
    CurrentForms::tpm->Close();
    CurrentForms::tpe->Close();
    CurrentForms::img->Close();
    CurrentForms::doc->Close();
}
