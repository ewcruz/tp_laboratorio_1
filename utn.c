#include <stdio.h>
#include <stdlib.h>
//#include <stdio_ext.h>

int getNumber(int* pNumero,char* msj,char* msjError,int min,int max,int reintentos)
{
    int numAux;
    int ret;

    while(reintentos>0)
    {
        printf(msj);
        if(scanf("%d",&numAux)==1)
        {
            if(numAux>=min&&numAux<=max)
            {
                break;
            }
        }
        fflush(stdin);
        reintentos--;
        printf(msjError);
    }
    if(reintentos==0)
    {
        ret=-1;
    }
    if(reintentos>0)
    {
        ret=0;
        *pNumero=numAux;
    }
    return ret;
}

int getInt(int* pInt, char* msj, char *msjError, int min, int max, int reintentos)
{
    int auxNum;
    int ret;

    while(reintentos>0)
    {
        printf(msj);
        if(scanf("%d",&auxNum)==1)
        {
            if(auxNum>=min&&auxNum<=max)
            {
                break;
            }
        }

        fflush(stdin);
        reintentos--;
        printf(msjError);
    }
        if(reintentos==0)
        {
            ret=-1;
        }
        if(reintentos>0)
        {
            ret=0;
            *pInt=auxNum;
        }
        return ret;
}

float getFloat(float* pFloat, char* msj, char* msjError, float min, float max, float reintentos)
{
    float auxNum;
    float ret;

    while(reintentos>0)
    {
        printf(msj);
        if(scanf("%f",&auxNum)==1)
        {
            if(auxNum>=min&&auxNum<=max)
            {
                break;
            }
        }
        fflush(stdin);
        reintentos--;
        printf(msjError);
    }
    if(reintentos==0)
    {
        ret=-1;
    }
    if(reintentos>0)
    {
        ret=0;
        *pFloat=auxNum;
    }
    return ret;
}
