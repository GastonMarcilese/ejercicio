#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main()
    {
        char seguir = 's';
        int opcion = 0, rta, band = 0, band1 = 0;
        double a,b;

        while(seguir == 's')
            {
                printf("1- Ingresar 1er operando (A=x)\n");
                printf("2- Ingresar 2do operando (B=y)\n");
                printf("3- Calcular la suma (A+B)\n");
                printf("4- Calcular la resta (A-B)\n");
                printf("5- Calcular la division (A/B)\n");
                printf("6- Calcular la multiplicacion (A*B)\n");
                printf("7- Calcular el factorial (A!)\n");
                printf("8- Calcular todas las operaciones\n");
                printf("9- Salir\n");

                scanf("%d", &opcion);

                switch(opcion)
                    {
                        case 1:
                            printf("ingrese num: ");
                            scanf("%lf", &a);
                            band = 1;//indica que realizo la carga del numero a
                            break;
                        case 2:
                            printf("ingrese num2: ");
                            scanf("%lf", &b);
                            band1 = 1;//indica que realizo la carga del numero b
                            break;
                        case 3:
                            if(band == 1 || band1 == 1)
                                 {
                                    rta = suma(a,b);
                                    printf("la suma es: %d\n", rta);//indica que realizo la suma entre a y b
                                 }
                            break;
                        case 4:
                            if(band == 1 || band1 == 1)
                                 {
                                    rta = resta(a,b);
                                    printf("la resta es: %d\n", rta);//indica que realizo la resta entre a y b
                                 }
                            break;
                        case 5:
                            if(band == 1 || band1 == 1)
                                 {
                                    rta = division(a,b);
                                    printf("la division es: %d\n", rta);//indica que realizo la divicion entre a y b
                                 }
                            break;
                        case 6:
                            if(band == 1 || band1 == 1)
                                 {
                                    rta = multiplicacion(a,b);
                                    printf("la multiplicacion es: %d\n", rta);//indica que realizo la multiplicacion entre a y b
                                  }
                            break;
                        case 7:
                            if(band == 1)
                                 {
                                    rta = factorial(a);
                                    printf("el factorial del numero %.lf es: %d\n", a, rta);//indica que realizo el factorial del numero a
                                  }
                            break;
                        case 8:
                            if(band == 1 || band1 == 1)
                                 {
                                     printf("la suma es: %.lf\n", suma(a,b));
                                     printf("la resta es: %.lf\n", resta(a,b));
                                     printf("la division es: %.lf\n", division(a,b));
                                     printf("la multiplicacion es: %.lf\n", multiplicacion(a,b));
                                     printf("el factorial del numero %.lf es: %.lf\n", a, factorial(a));
                                  }//indica que realizo todas las operaciones
                            break;
                        case 9:
                            seguir = 'n';//salir del programa
                            break;
                    }//termina el switch

            }//termina el while

        return 0;

    }//termina el main
