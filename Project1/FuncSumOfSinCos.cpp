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
    for (temp; temp > 360; temp -= 180);

    return sin(temp * 3.14159265 / 180) + cos((koeff * argument) * 3.14159265 / 180);
}
