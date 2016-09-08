#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float pedirNumero1()
{
    float num1;
    system("cls");
    printf("ingrese primer numero: ");
    scanf("%f", &num1);
    return num1;
}

float pedirNumero2()
{
    float num2;
    system("cls");
    printf("ingrese segundo numero: ");
    scanf("%f", &num2);
    return num2;
}

float sumar(float n1, float n2)
{
    float rta;
    rta = n1 + n2;
    return rta;
}

float restar(float n1, float n2)
{
    float rta;
    rta = n1 - n2;
    return rta;
}

float dividir(float n1, float n2)
{
    float rta;
    rta = n1 / n2;
    if(n2 == 0)
    {
        printf("ERROR no se puede dividir por cero\n");
        system("pause");
    }

    return rta;
}

float multiplicar(float n1, float n2)
{
    float rta;
    rta = n1 * n2;
    return rta;
}

float factorial(float n1)
{
    float rta;
    if(n1 == 0)
    {
        return 1;
    }
    else
    {
        rta = n1 * factorial(n1-1);
        return rta;
    }
}



