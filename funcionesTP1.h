#ifndef FUNCIONESTP1_H_INCLUDED
#define FUNCIONESTP1_H_INCLUDED

float suma(float x, float y, float* pResultado, char* msj);
float resta(float x, float y, float* pResultado, char* msj);
float division(float x, float y, float* pResultado, char* msj, char* msjError);
float multiplicacion(float x, float y, float* pResultado, char* msj);
int getNumber(int* pNumero,char* msj,char* msjError,int min,int max,int reintentos);

#endif // FUNCIONESTP1_H_INCLUDED
