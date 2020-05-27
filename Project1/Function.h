#pragma once
#include <cmath>
#include <stdlib.h>



public ref class Function
{
protected:
	double argument;

public:
	Function();
	Function(double argument);
	Function(Function% other);
	double GetArgument();

	void SetArgument(double argument);
	
	virtual double CalculateValue() = 0;
};

