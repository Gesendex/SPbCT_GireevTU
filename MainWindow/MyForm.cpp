#include "MyForm.h"

using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void Main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	MainWindow::MyForm form;
	Application::Run(% form);
}