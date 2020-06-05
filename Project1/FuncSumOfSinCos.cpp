#include "FuncSumOfSinCos.h"

FuncSumOfSinCos::FuncSumOfSinCos() : Function()
{
}

FuncSumOfSinCos::FuncSumOfSinCos(double argument) : Function(argument)
{
}

double^ FuncSumOfSinCos::CalculateValue()
{
    double temp = pow(argument, power);
    double Pi = 3.14159265;
    for (temp; temp > 360; temp -= 180);
    
    return sin(temp * Pi / 180) + cos((koeff * argument) * Pi / 180);
}
