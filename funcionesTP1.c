#include <stdio.h>
#include <stdlib.h>

/**
* \brief la funcion realiza la operacion suma.
* \param recibe como parametros los valores tomados del main, y un puntero a una variable del main.
* \return devuelve un flotante, que se almacena en *pResultado.
*/
float suma(float x, float y, float* pResultado)
{
    float resultado;
    resultado=x+y;
    *pResultado=resultado;
    return 0;
}
/**
* \brief la funcion realiza la operacion resta.
* \param recibe como parametros los valores tomados del main, y un puntero a una variable del main.
* \return devuelve un flotante, que se almacena en *pResultado.
*/
float resta(float x, float y, float* pResultado)
{
    float resultado;
    resultado=x-y;
    *pResultado=resultado;
    return 0;
}
/**
* \brief la funcion realiza la operacion division, y devuelve un error si la division se hace por 0.
* \param recibe como parametros los valores tomados del main.
* \return devuelve un flotante que lo imprime por printf, no se me ocurrio mejor forma de hacer para que muestre el error si divide por 0.
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
* \brief la funcion realiza la operacion multiplicacion, y un puntero a una variable del main.
* \param recibe como parametros los valores tomados del main.
* \return devuelve un flotante que se almacena en *pResultado.
*/
float multiplicacion(float x, float y, float* pResultado)
{
    float resultado;
    resultado=x*y;
    *pResultado=resultado;
    return 0;
}
/**
* \brief la funcion realiza el factorial de la variable pasada, y un puntero para el main.
* \param recibe como parametro la variable que queremos operar.
* \return devuelve un flotante que se almacena en *pResultado.
*/
float factorial(float x, float* pResultado)
{
    float auxNum;
    float fact=1;
    if(x==0)
    {
        fact=fact;
    }
    if(x>0)
    {
        for(auxNum=1;auxNum<=x;auxNum++)
        {
            fact=fact*auxNum;
        }
    }
    else if(x<0)
    {
        printf("\nError en la operacion, solo se pueden factorear numeros naturales\n");
    }
    *pResultado=fact;
    return 0;
}

