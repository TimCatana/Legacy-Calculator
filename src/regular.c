/* Tim, Saqif and Evan Part */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "additionalFunctions.h"
#include "regular.h"


// Calculate the sum of two numbers (a + b)
float add(float a, float b){
    return (a + b);
}


// Calculate the difference of two numbers (a - b)
float subtract(float a, float b){
    return (a - b);
}


// Calculate the product of two numbers (a * b)
float mult(float a, float b){
    return (a * b);
}


// Calcualte the quotient of two numbers (a / b)
float divide(float a, float b){
    return (a / b);
}


// Print out the operation that consists of two float operands and a result
void printReg2FloatOper(char *operation, float operandA, char *operSymbol, float operandB, float result) {
    printf("%s %.4f %s %.4f = %.4f\n", operation, operandA, operSymbol, operandB, result);
}



// Runs the main operation for the regular calculator 
void regularCalculator(){
    bool isRunning = true;
    float operandA, operandB, result;
   
    while(isRunning){

        switch (regCalcMenu()){

            case ADD:
                system("clear");
                operandA =  input("Enter addend a: ");   
                operandB =  input("Enter addend b: ");
                result = add(operandA, operandB);
                printReg2FloatOper("\nSum:", operandA, "+", operandB, result);
                break;
            
            case SUBTRACT:
                system("clear");
                operandA = input("Enter minuend: ");
                operandB = input("Enter subtrahend: ");
                result = subtract(operandA, operandB);
                printReg2FloatOper("\nDifference:", operandA, "-", operandB, result);
                break;

            case MULTIPLY:
                system("clear");
                operandA = input("Enter multiplicand: ");
                operandB = input("Enter multiplier: ");
                result = mult(operandA, operandB);
                printReg2FloatOper("\nProduct:", operandA, "x", operandB, result);
                break;

            case DIVIDE:
                system("clear");
                operandA = input("Enter dividend: ");
                operandB = input("Enter divisor: ");
                result = divide(operandA, operandB);
                printReg2FloatOper("\nQuotient:", operandA, "/", operandB, result);
                break;

            case BACKFROMREG:
                system("clear");
                isRunning = false;
                break;
            
            default:
                system("clear");
                break;
        }

    }

}
