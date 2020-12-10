#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace SigninForm;

[STAThread]

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MyForm bankManagementSystem;
	Application::Run(% bankManagementSystem);
}