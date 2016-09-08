#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
    char seguir='s';
    int opcion=0;
    float num1 = 0,num2 = 0,rta,rtaSuma,rtaResta,rtaDivision,rtaMultiplicacion;

    while(seguir=='s')
    {
        system("cls");
        printf("1- Ingresar 1er operando (A=%2.f)\n", num1);
        printf("2- Ingresar 2do operando (B=%2.f)\n", num2);
        printf("3- Calcular la suma (%2.f+%2.f)\n", num1, num2);
        printf("4- Calcular la resta (%2.f-%2.f)\n", num1, num2);
        printf("5- Calcular la division (%2.f/%2.f)\n", num1, num2);
        printf("6- Calcular la multiplicacion (%2.f*%2.f)\n", num1, num2);
        printf("7- Calcular el factorial (%2.f!)\n", num1);
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                num1 = pedirNumero1();
                break;
            case 2:
                num2 = pedirNumero2();
                break;
            case 3:
                rtaSuma = sumar(num1, num2);
                break;
            case 4:
                rtaResta = restar(num1, num2);
                break;
            case 5:
                rtaDivision = dividir(num1, num2);
                break;
            case 6:
                rtaMultiplicacion = multiplicar(num1, num2);
                break;
            case 7:
                rta = factorial(num1);
                break;
            case 8:
                system("cls");
                printf("la suma es: %2.f\n", rtaSuma);
                printf("la resta es: %2.f\n", rtaResta);
                printf("la division es: %2.f\n", rtaDivision);
                printf("la multiplicacion es: %2.f\n", rtaMultiplicacion);
                printf("el factorial del numero %2.f es: %2.f\n", num1, rta);
                system("pause");
                break;
            case 9:
                seguir = 'n';
                break;
        }

    }

    return 0;
}

