#include <stdio.h>
#include <stdlib.h>

float suma(float x, float y, char* msj)
{
    float resultado;
    resultado=x+y;
    printf("%s%.2f",msj,resultado);
    return 0;
}

float resta(float x, float y, char* msj)
{
    float resultado;
    resultado=x-y;
    printf("%s%.2f",msj,resultado);
    return 0;
}

float division(float x, float y, char* msj, char* msjError)
{
    float resultado;
    if(y==0)
    {
        printf("\nError en la division;%s",msjError);
    }
    else
    {
        resultado=x/y;
        printf("%s%.2f",msj,resultado);
    }
    return 0;
}

float multiplicacion(float x, float y, char* msj)
{
    float resultado;
    resultado=x*y;
    printf("%s%.2f",msj,resultado);
    return 0;
}
