#include "Function.h"

Function::Function()
{
	argument = 0;
}

Function::Function(double argument)
{
	this->argument = argument;
}

Function::Function(Function% other)
{
	this->argument = other.argument;
}

double Function::GetArgument()
{
	return argument;
}

void Function::SetArgument(double arg)
{
	argument = arg;
}
