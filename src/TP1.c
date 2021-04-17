#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{
	setbuf(stdout,NULL);
    int flagOperando1 = 0;
    int flagOperando2 = 0;
    float numero1;
    float numero2;
    float suma;
    float resta;
    float division;
    float multiplicacion;
    int factorial;
    int opcion;
do{


    opcion = menuUsuario("1. Ingresar primer operando\n2.Ingresar segundo operando\n3.Calcular todas las operaciones\n a)Calcular la suma(A+B)\n b)Calcular la resta(A-B)\n c)Calcular la division(A/B)\n d)Calcular la multiplicacion(A*B)\n e)Calcular el factorial(A!)\n4.Informar resultados\n5.Salir\n Ingrese una opcion: ");


    switch(opcion)
    {
    case 1:
        // Ingreso del primer operando
        numero1 = getFloat("Ingrese primer operando: ");
        printf("A= %.2f\n",numero1);
        flagOperando1 = 1;
        break;
    case 2:
        // Ingreso del segundo operando
        numero2 = getFloat("Ingrese segundo operando: ");
        printf("B= %.2f\n",numero2);
        flagOperando2 = 1;
        break;
    case 3:
        // Realiza todas las operaciones
        suma = cuentaSuma(numero1, numero2);
        resta = cuentaResta(numero1, numero2);
        division = cuentaDivision(numero1,numero2);
        multiplicacion = cuentaMultiplicacion(numero1,numero2);
        factorial = cuentaFactorial(numero1);
        // Muestra las operaciones a realizar siempre y cuando se hayan ingresado ambos operandos
        if (flagOperando1 == 1 && flagOperando2 == 1)
        {
            printf("Calcular todas las operaciones: \n");
            printf(" a) Calcular la suma: %.2f + %.2f\n", numero1,numero2);
            printf(" b) Calcular la resta: %.2f - %.2f\n",numero1,numero2);
            printf(" c) Calcular la division: %.2f / %.2f \n", numero1,numero2);
            printf(" d) Calcular la multiplicacion: %.2f * %.2f\n", numero1,numero2);
            printf(" e) Calcular el factorial de: %.2f\n", numero1);
        }
        // En caso de no ingresar un operando, se le notifica al usuario
        else
        {
            printf ("Falta ingresar un operando!\n");
        }
        break;
    case 4:
        // Muestra los resultados
        printf("Informar resultados\n");
        if(flagOperando1==1 && flagOperando2== 1)
        {

        printf(" a) El resultado de %.2f + %.2f es: %.2f\n",numero1,numero2,suma);
        printf(" b) El resultado de %.2f - %.2f es: %.2f \n",numero1,numero2,resta);

        // Si el segundo operando es 0, no se puede realizar la division, por lo tanto muestra el siguiente mensaje
        if (numero2 == 0)
            {
                printf(" c) No se puede dividir por 0!\n");
            }
        else
        {
            printf(" c) El resultado de %.2f / %.2f es: %.2f\n",numero1,numero2,division);
        }
        printf(" d) El resultado de %.2f * %.2f es: %.2f\n", numero1,numero2,multiplicacion);
        int entero = (int) numero1; // Declaro la variable para luego verificar si el primer operando es decimal
        // Verifico si el primer operando es decimal
        if((numero1-entero) == 0)
        {
            printf(" e) El resultado de %.2f! es : %d\n",numero1,factorial);//En caso de ser entero, muestra el resultado
        }
        else
        {
            printf(" e) No se puede calcular el factorial de un numero decimal!\n");//De lo contrario, muestra el mensaje de que no se puede calcular un numero decimal
        }
        }
        else
        {
            printf("Falta ingresar un operando para mostrar los resultados! \n");//Muestra mensaje de error si se intenta mostrar los resultados sin ingresar ambos operandos
        }
        break;

    case 5:
        //Termina de ejecutar el programa
        break;
    default:
        // Si el usuario no ingresa una opcion entre 1 y 5, se le pide que lo intente nuevamente
        printf("Ingrese una opcion valida!\n");
    }
}while (opcion != 5);
    return EXIT_SUCCESS;
}
