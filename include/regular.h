/* Tim, Saqif and Evan Part */
/**
 * @file accountant.h
 * @author Members of Section 3 Group 4 of CIS*3250 (F20)
 * @date October 2020
 * @brief file containing the function definitions of Regular calculator.
 */
#ifndef _REGULAR_H
#define _REGULAR_H

/**
* Calculates the sum of two floats
*@pre MUST CONTAIN two float variables, MAY NOT BE NULL
*@post the float resultant of two numbers summed 
*@return returns a result of type float
**/
float add(float, float);

/**
* Calculates the difference between two floats.
*@pre MUST CONTAIN two float variables, MAY NOT BE NULL
*@post the float resultant of the difference of the two numbers 
*@return returns a result of type float
**/
float subtract(float, float);

/**
* Calculates the product of two floats.
*@pre MUST CONTAIN two float variables, MAY NOT BE NULL
*@post the float resultant of the product of the two numbers 
*@return returns a result of type float
**/
float mult(float, float);

/**
* Calculates the quotient of two floats.
*@pre MUST CONTAIN two float variables, MAY NOT BE NULL
*@post the float resultant of the quotient of the two numbers 
*@return returns a result of type float
**/
float divide(float, float);

/**
* Performs basic arithmetic calculations with user inputs and instructions.
*@return returns void
**/
void regularCalculator();


#endif
