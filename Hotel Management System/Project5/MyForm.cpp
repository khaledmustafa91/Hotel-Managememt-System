#include "MyForm.h"

#include "MyForm3.h"
#include <string>
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void Main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	Project5::MyForm3 form;
	Application::Run(%form);
}