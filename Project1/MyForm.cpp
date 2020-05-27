#include "MyForm.h"
#include <Windows.h>
using namespace Project1; // Название проекта
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm); 
	return 0;
}

System::Void Project1::MyForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	double argument = System::Convert::ToDouble(func1->Text);

	Result->Text = System::Convert::ToString(argument);
	return System::Void();
}

System::Void Project1::MyForm::button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	double argument = System::Convert::ToDouble(func2->Text);
	
	if (argument == 0)
	{
		argument = 1;
		func2->Text = System::Convert::ToString(1);
		MessageBox::Show("Denominator cannot be 0!\nDefault value(1) was set", "ERROR");
	}		

	FuncDivisionByX div;
	div.SetArgument(argument);

	Result->Text = System::Convert::ToString(div.CalculateValue());

	return System::Void();
}

