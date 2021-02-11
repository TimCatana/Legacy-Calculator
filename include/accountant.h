/* Tim, Saqif and Evan Part */
/**
 * @file accountant.h
 * @author Members of Section 3 Group 4 of CIS*3250 (F20)
 * @date October 2020
 * @brief file containing the function definitions of accountant calculator.
 */

#ifndef _ACCOUNTANT_H
#define _ACCOUNTANT_H

/**
* Determines the largest value in the list.
*@pre MUST INCLUDE a reference to a sorted NON-NULL array of floats and the size of the array
*@post the maximum float value in the array 
*@return returns the maximum float value in the array  
**/
float getMaximum(float*, int);

/**
* Determines the minimum value in the list. 
*@pre MUST INCLUDE a reference to a sorted NON-NULL array of floats
*@post the minimum float value in the array 
*@return returns the minimum float value in the array
**/
float getMinimum(float*);

/**
* Determines the average value of all numbers.
*@pre MUST INCLUDE a reference to a sorted NON-NULL array of floats and the size of the array
*@post the average of the values in the array
*@return the average of the values in the array as a float
**/
float getAverage(float*, int);

/**
*  Determines the total range between the maximum and minimum values. 
*@pre MUST INCLUDE the MAXIMUM value of the set and the MINIMUM value of the set
*@post the float resultant of the difference of the two values
*@return returns a result of type float 
**/
float getRange(float, float);

/**
* Determines the median value of the set.
*@pre MUST INCLUDE a reference to a sorted NON-NULL array of floats and the size of the array
*@post the middle (median) value of the array
*@return returns the middle (median) value of the array as a float
**/
float getMedian(float*, int);

/**
* Determines the value that appears the most frequently.
*@pre MUST INCLUDE a reference to a sorted NON-NULL array of floats and the size of the array as well as a REFERENCE to a
      boolean that will determine whether a valid mode exists or not
*@post the number that appears the most frequent in the array
*@return returns the value that appears the most frequently in the array OR if multiple values appear the same ammount
*        of times, then it returns -1 indicating the fact that there is no true mode
**/
float getMode(float*, int, bool*);

/**
* Sorts values in accending order from the given values.
*@pre MUST INCLUDE a reference to a sorted NON-NULL array of floats and the size of the array
*@post prints out the given array of float values
*@return returns void
**/
void showSortedSet(float*, int);

/**
* Allows user to input a new set of values
*@pre MUST INCLUDE the size of the array
*@post allows the user to create and populate a new array with desired size and inputted values
*@return returns the new float array of inputted values
**/
float *setAccArr(int);

/**
* Allows user to input a new set of values
*@pre includes the text that is to tell the user what to do and the current index of the array we are inputting the value to
*@post allows the user to input a value at a specific index of an array (checks to make sure the value is a number) 
*@return returns the value that the user inputted
**/
float inputArr(char *, int);

/**
* Performs a number of functions that are used to analyze a set of values.
*@return returns void
**/
void accountantCalculator();



#endif
