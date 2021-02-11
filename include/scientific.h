/* Tim, Saqif and Evan Part */
/**
 * @file scientific.h
 * @author Members of Section 3 Group 4 of CIS*3250 (F20)
 * @date October 2020
 * @brief file containing the function definitions of Scientific calculator.
 */
#ifndef _SCIENTIFIC_H
#define _SCIENTIFIC_H

/**
* The main calculator for scientific functions
* @pre N/A
* @post Prints out the output for different operations
* @return 
**/
void scientificCalculator();

/**
* Calculates the power of a float base to the integer exponent given
* @pre Takes a base number and the power
* @post Computes the power of a float
* @return A float of the result
**/
float power(float, int);

/**
* Calculates the factorial of an integer value
* @pre An int for the term number in the factorial sequence
* @post Computes the factorial number for the nth term
* @return The int for the nth factorial number
**/
int factorial(int);

/**
* Calcultes the fibonacci sum until a integer value
* @pre An int for the term number in the fibonacci sequence
* @post Computes the sum of fibonacci number until nth term
* @return The int for the sum of the fibonacci numbers
**/
int fibonacci(int);

/**
* Calculates the sine of a float
* @pre A float number
* @post Computes the sine of a number
* @return A float from the result of the sine function
**/
float sine(float);

/**
* Calculates the cosine of a float
* @pre A float number
* @post Computes the cosine of a number
* @return A float from the result of the cosine function
**/
float cosine(float);

/**
* Calculates the tangent of a float
* @pre A float number
* @post Computes the tangent of a number
* @return A float from the result of the tangent function
**/
float tangent(float);

/**
* Prompts the user to enter 2 matricies and computes the sum of the 2 matricies
* @pre N/A
* @post Computes the sum of the matricies and prints the output
* @return N/A
**/
void matrixSum();

/**
* Prompts the user to enter 2 matricies and computes the product of the 2 matricies
* @pre N/A
* @post Computes the product of the matricies and prints the output
* @return N/A
**/
void matrixProduct();

/**
* Prompts the user to enter a matricies and computes the transpose of the matrix
* @pre N/A
* @post Computes the transpose of the matrix and prints the output
* @return N/A
**/
void matrixTranpose();

/**
* Prompts the user to enter the amount of seconds they want to convert to a different unit (Ex: hours, days, weeks, etc.)
* @pre N/A
* @post Converts the amount of seconds, to the specified unit and prints the result
* @return N/A
**/
void time();


#endif
