#include <stdio.h>
#include <stdlib.h>
#include "funcionesTP1.h"

float suma(float x, float y, char* msj);
float resta(float x, float y, char* msj);
float division(float x, float y, char* msj, char* msjError);
float multiplicacion(float x, float y, char* msj);

int main()
{
    float a;
    float b;
    float operacionSuma;
    float operacionResta;
    float operacionDivision;
    float operacionMultiplicacion;

    printf("Ingrese el primer operando aqui: \n");
    scanf("%f",&a);
    printf("Ingrese el segundo operando aqui: \n");
    scanf("%f",&b);

    operacionSuma=suma(a,b,"\nEl resultado de la suma A+B es:\n");
    operacionResta=resta(a,b,"\nEl resultado de la resta A-B es:\n");
    operacionDivision=division(a,b,"\nEl resultado de la division A/B es:\n","\nno se puede dividir por 0.");
    operacionMultiplicacion=multiplicacion(a,b,"\nEl resultado de la multiplicacion A*B es:\n");

    return 0;
}
