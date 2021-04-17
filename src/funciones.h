#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED




/** \brief Prototipo del menu con sus respectivas opciones
 *
 * \param menu[] char Menu de opciones
 * \return int Guarda la opcion ingresada
 *
 */
int menuUsuario(char menu[]);

/** \brief Prototipo del ingreso del primer operando
 *
 * \param mensaje[] char Pide el ingreso del primer operando
 * \return float Devuelve el operando ingresado
 *
 */
float getFloat(char mensaje[]);

/** \brief Suma entre dos operandos
 *
 * \param numero1 float Primer operando
 * \param numero2 float Segundo operando
 * \return float Suma entre el primer operando y el segundo operando
 *
 */
float cuentaSuma(float numero1, float numero2);

/** \brief Resta entre dos operandos
 *
 * \param numero1 float Primer operando
 * \param numero2 float Segundo operando
 * \return float Resta entre el primer operando y el segundo operando
 *
 */
float cuentaResta(float numero1, float numero2);

/** \brief Division entre dos operandos
 *
 * \param numero1 float Primer operando
 * \param numero2 float Segundo operando
 * \return float Division entre el primer operando y segundo operando
 *
 */
float cuentaDivision(float numero1, float numero2);

/** \brief Multiplicacion entre dos operandos
 *
 * \param numero1 float Primer operando
 * \param numero2 float Segundo operando
 * \return float Multiplicacion entre el primer operando y segundo operando
 *
 */
float cuentaMultiplicacion(float numero1, float numero2);

/** \brief Factorial del primer operando
 *
 * \param numero1 float Primer operando
 * \return int Resultado del factorial del primer operando
 *
 */
int cuentaFactorial(float numero1);
#endif // FUNCIONES_H_INCLUDED
