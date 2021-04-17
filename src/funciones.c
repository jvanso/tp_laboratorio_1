/*
 * funciones.c
 *
 *  Created on: 17 abr. 2021
 *      Author: Sordello
 */


#include <stdio.h>
#include <stdlib.h>
// Muestra el menu
int menuUsuario(char menu[])
{
    int opcion;
    printf("%s", menu);
    scanf("%d", &opcion);
    return opcion;
}
// Pide el ingreso de los operandos
float getFloat(char mensaje[])
{
    float numero;
    printf("%s", mensaje);
    scanf("%f", &numero);
    return numero;

}
// Resuelve la division entre el primer y segundo operando mientras el segundo operando no sea 0
float cuentaDivision(float numero1, float numero2)
{
    float resultadodivision;
    if (numero2 != 0)
    {
        resultadodivision = numero1 / numero2;
    }
    return resultadodivision;
}
// Resuelve la multiplicacion entre el primer y segundo operando
float cuentaMultiplicacion(float numero1, float numero2)
{
    float resultadomultiplicacion;
    resultadomultiplicacion = numero1*numero2;
    return resultadomultiplicacion;
}
// Resuelve la suma entre el primer y segundo operando
float cuentaSuma(float numero1, float numero2)
{
    float resultadosuma;
    resultadosuma = numero1+numero2;
    return resultadosuma;
}
// Resuelve la resta entre el primer y segundo operando
float cuentaResta(float numero1, float numero2)
{
    float resultadoresta;
    resultadoresta = numero1 - numero2;
    return resultadoresta;
}
// Realiza el factorial del primer operando
int cuentaFactorial(float numero1)
{
	int numeroFactorial;
    int resultadofactorial = 1;
    for (numeroFactorial=numero1; numeroFactorial>1; numeroFactorial--)
    {
        resultadofactorial = resultadofactorial*numeroFactorial;
    }
    return resultadofactorial;
}
