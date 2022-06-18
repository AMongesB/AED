#include <iostream>
#include <cassert>
#include <cmath>

double Celsius(double f);
bool AreNear(double, double, double);

int main()
{
    double f = 3;

    assert(Celsius(f) == -16.111111111111111);      // Celsius(3)

    f = 32;
    assert(Celsius(f) == 0);                        // Celsius(32)

    f = 75;
    assert(23.8 < Celsius(f) && Celsius(f) < 24.0); // Celsius(75)
}

double Celsius(double f)
{
    return  5.0 / 9.0 * (f - 32);
}

bool AreNear(double a, double b, double tolerancia = 0.001)
{
    return (abs(a - b) <= tolerancia) ? true : false;
}