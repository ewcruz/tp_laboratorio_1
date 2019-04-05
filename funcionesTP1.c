#include <stdio.h>
#include <stdlib.h>

/**
* \brief la funcion realiza la operacion suma.
* \param recibe como parametros los valores tomados del main.
* \return devuelve un flotante que lo imprime por printf.
*/
float suma(float x, float y, float* pResultado, char* msj)
{
    float resultado;
    resultado=x+y;
    *pResultado=resultado;
    printf("%s%.2f",msj,resultado);
    return 0;
}
/**
* \brief la funcion realiza la operacion resta.
* \param recibe como parametros los valores tomados del main.
* \return devuelve un flotante que lo imprime por printf.
*/
float resta(float x, float y, float* pResultado, char* msj)
{
    float resultado;
    resultado=x-y;
    *pResultado=resultado;
    printf("%s%.2f",msj,resultado);
    return 0;
}
/**
* \brief la funcion realiza la operacion division, y devuelve un error si la division se hace por 0.
* \param recibe como parametros los valores tomados del main.
* \return devuelve un flotante que lo imprime por printf.
*/
float division(float x, float y, float* pResultado, char* msj, char* msjError)
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
    *pResultado=resultado;
    return 0;
}
/**
* \brief la funcion realiza la operacion multiplicacion.
* \param recibe como parametros los valores tomados del main.
* \return devuelve un flotante que lo imprime por printf.
*/
float multiplicacion(float x, float y, float* pResultado, char* msj)
{
    float resultado;
    resultado=x*y;
    *pResultado=resultado;
    printf("%s%.2f",msj,resultado);
    return 0;
}
