#include <stdio.h>
#include <stdlib.h>
#include "funcionesTP1.h"
#include "utn.h"
#define MIN -10000
#define MAX 10000
#define MINMENU 1
#define MAXMENU 5
#define REPETICIONES 5

int main()
{
    float a;
    float b;
    float operacionSuma;
    float operacionResta;
    float operacionDivision;
    float operacionMultiplicacion;
    //float factorialA;
    //float factorialB;
    int nroOpciones;
    int ret;

    printf("Bienvenido, elija una opcion para continuar:");
    printf("\n___________________________________________\n");
    printf("\n    1) Ingresar 1er operando (A=x)\n");
    printf("    2) Ingresar 2do operando (B=y)\n");
    printf("    3) Calcular todas las operaciones\n");
    printf("    4) Informar resultados\n");
    printf("    5) Salir");
    printf("\n___________________________________________\n");


    do{
        getNumber(&nroOpciones,"\nIngrese la opcion deseada:\n","Ingrese una opcion valida por favor!\n\n",MINMENU,MAXMENU,REPETICIONES);
        switch(nroOpciones)
        {
            case 1:
                getFloat(&a,"\nIngrese el valor para A:\n","Ingrese un numero por favor:\n",MIN,MAX,REPETICIONES);
                printf("\nEl valor ingresado para A es: %.2f\n",a);
                break;
            case 2:
                getFloat(&b,"\nIngrese el valor para B:\n","Ingrese un numero por favor:\n",MIN,MAX,REPETICIONES);
                printf("\nEl valor ingresado para B es: %.2f\n",b);
                break;
            case 3:
                suma(a,b,&operacionSuma);
                resta(a,b,&operacionResta);
                multiplicacion(a,b,&operacionMultiplicacion);
                printf("\nTodas las operaciones calculadas\n");
                break;
            case 4:
                printf("El resultado de A+B es: %.2f\n",operacionSuma);
                printf("El resultado de A-B es: %.2f\n",operacionResta);
                division(a,b,&operacionDivision,"El resultado de la division A/B es: ","\nno se puede dividir por 0.\n");
                printf("\nEl resultado de A*B es: %.2f\n",operacionMultiplicacion);
                break;
            case 5:
                printf("________________________");
                printf("\n Gracias por pasar!\n");
                ret=-1;
                break;
        }
    }
    while(ret!=-1);

    return 0;
}
