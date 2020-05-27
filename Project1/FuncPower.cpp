#include "FuncPower.h"

FuncPower::FuncPower() : Function()
{	
}

FuncPower::FuncPower(double argument) : Function(argument)
{
}

FuncPower::FuncPower(FuncPower% other)
{
	this->argument = other.GetArgument();
}

double FuncPower::CalctulateValue()
{
	return pow(this->argument, this->power);
}
