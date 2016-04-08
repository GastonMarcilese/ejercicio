#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <stdio.h>
#include <conio.h>

double suma(double x, double y);
double resta(double x, double y);
double division(double x, double y);
double multiplicacion(double x, double y);
double factorial(double x);


double suma(double x, double y)
{
    double rta;
    rta = x + y;
    return rta;
}

double resta(double x, double y)
{
    double rta;
    rta = x - y;
    return rta;
}

double division(double x, double y)
{
    double rta;
    rta = x / y;
    if (y == 0)
        {
        printf("no se puede dividir por Cero ");
        return 0;
        }
    return rta;
}

double multiplicacion(double x, double y)
{
    double rta;
    rta = x * y;
    return rta;
}

double factorial(double x)
{
    double rta;
    if(x == 1)
    {
        return 1;
    }
    rta = x * factorial(x-1);
    return rta;
}

#endif // FUNCIONES_H_INCLUDED

