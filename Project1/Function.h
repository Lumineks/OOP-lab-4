#pragma once
#include <cmath>
#include <stdlib.h>



ref class Function abstract
{
protected:
	double argument;

public:
	Function();
	Function(double argument);
	Function(Function% other);
	double GetArgument();

	void SetArgument(double argument);
	
	virtual double^ CalculateValue() override abstract;
};

