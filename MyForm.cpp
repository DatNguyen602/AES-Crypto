#include "MyForm.h"

[STAThreadAttribute] int main() {
    System::Windows::Forms::Application::EnableVisualStyles();
    System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(true);
    AESproject::MyForm form;
    System::Threading::Thread::CurrentThread->ApartmentState = System::Threading::ApartmentState::STA;
    System::Windows::Forms::Application::Run(% form);

    return 0;
}