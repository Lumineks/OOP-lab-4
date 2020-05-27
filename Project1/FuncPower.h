#pragma once
#include "Function.h"
public ref class FuncPower :
	public Function
{
private:
	const double power = 3;

public:
	FuncPower();
	FuncPower(double argument);
	FuncPower(FuncPower% other);

	virtual double CalctulateValue() override;
};

