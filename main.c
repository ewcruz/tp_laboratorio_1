#include <stdio.h>
#include <stdlib.h>
#include "funcionesTP1.h"
#include "utn.c"

int main()
{
    float a;
    float b;
    float operacionSuma;
    float operacionResta;
    float operacionDivision;
    float operacionMultiplicacion;
    //int menuOpciones;
    //float factorialA;
    //float factorialB;

    printf("Ingrese el primer operando aqui: \n");
    scanf("%f",&a);
    printf("Ingrese el segundo operando aqui: \n");
    scanf("%f",&b);
    printf("El valor cargado para el operando A = %.2f",a);
    printf("\nEl valor cargado para el operando B = %.2f",b);

    suma(a,b,&operacionSuma,"\nEl resultado de la suma A+B es:\n");
    resta(a,b,&operacionResta,"\nEl resultado de la resta A-B es:\n");
    division(a,b,&operacionDivision,"\nEl resultado de la division A/B es:\n","\nno se puede dividir por 0.");
    multiplicacion(a,b,&operacionMultiplicacion,"\nEl resultado de la multiplicacion A*B es:\n");

    return 0;
}
