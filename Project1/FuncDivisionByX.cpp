#include "FuncDivisionByX.h"

FuncDivisionByX::FuncDivisionByX() : Function()
{
}

FuncDivisionByX::FuncDivisionByX(double argument) : Function(argument)
{
}

FuncDivisionByX::FuncDivisionByX(FuncDivisionByX% other)
{
    this->argument = other.GetArgument();
}

double^ FuncDivisionByX::CalculateValue()
{
    return this->numerator / argument;
}
