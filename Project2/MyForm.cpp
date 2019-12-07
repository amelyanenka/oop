#include "MyForm.h"

#include <Windows.h>

using namespace Project2; // This is your project name

int main()
	{

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew MyForm());

	return 0;

	}