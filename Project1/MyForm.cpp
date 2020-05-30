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

	FuncPower^ fPower = gcnew FuncPower;
	fPower->SetArgument(argument);
	functions->Add(fPower);

	Result->AppendText(Environment::NewLine);
	Result->AppendText("Function power = ");
	Result->AppendText(System::Convert::ToString(fPower->CalculateValue()));
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

	FuncDivisionByX^ div = gcnew FuncDivisionByX;
	div->SetArgument(argument);

	functions->Add(div);
	
	Result->AppendText(Environment::NewLine);
	Result->AppendText("Division by x = ");
	Result->AppendText(System::Convert::ToString(div->CalculateValue()));

	return System::Void();
}

System::Void Project1::MyForm::button5_Click(System::Object^ sender, System::EventArgs^ e)
{
	Result->AppendText(Environment::NewLine);
	Result->AppendText("Sum: ");
	Result->AppendText(System::Convert::ToString(functions->Sum()));

	return System::Void();
}

System::Void Project1::MyForm::button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	double argument = System::Convert::ToDouble(func2->Text);

	FuncSumOfSinCos^ sumOfSinCos = gcnew FuncSumOfSinCos;

	sumOfSinCos->SetArgument(argument);

	functions->Add(sumOfSinCos);

	Result->AppendText(Environment::NewLine);
	Result->AppendText("Sum of sin&cos = ");
	Result->AppendText(System::Convert::ToString(sumOfSinCos->CalculateValue()));

	return System::Void();
}

System::Void Project1::MyForm::button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	functions->Clear();

	Result->Clear();
	func1->Value = 0;
	func2->Value = 0;
	func3->Value = 0;

	return System::Void();
}

System::Void Project1::MyForm::button6_Click(System::Object^ sender, System::EventArgs^ e)
{
	Result->Clear();
	return System::Void();
}

