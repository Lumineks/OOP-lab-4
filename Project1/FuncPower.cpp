#include "FuncPower.h"

FuncPower::FuncPower()
{
	argument = 0;
}

FuncPower::FuncPower(double argument) : Function(argument)
{
}

FuncPower::FuncPower(FuncPower% other)
{
	this->argument = other.GetArgument();
}

double^ FuncPower::CalculateValue()
{
	return pow(this->argument, this->power);
}
