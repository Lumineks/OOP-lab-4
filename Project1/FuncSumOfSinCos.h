#pragma once
#include "Function.h"
ref class FuncSumOfSinCos :
	public Function
{
private:
	const double power = 2;
	const double koeff = 2;

public:
	FuncSumOfSinCos();
	FuncSumOfSinCos(double argument);

	virtual double^ CalculateValue() override;

};

