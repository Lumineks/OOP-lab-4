#pragma once
#include "Function.h"

ref class FuncDivisionByX :
	public Function
{
private:
	const int numerator = 1;
public:
	FuncDivisionByX();
	FuncDivisionByX(double argument);
	FuncDivisionByX(FuncDivisionByX% other);
	
	virtual double CalculateValue() override;
};

