/*>Dylan and Kurtis Section START<*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>

#include "additionalFunctions.h"
#include "scientific.h"

#define PI 3.1415926535897932384626433832795

int factorial(int term) {
    int result = 0;

    if(term == 0){
        result = 1;
    } else {
      result = term * factorial(term - 1);
    }

    return result;
}

/* Get the "term" term in the fibonacci sequence */
int fibonacci(int term) {
    int result = 0; 

    if(term == 1){
      result = 0;
    } else if(term == 2){
      result = 1;
    } else {
      result = fibonacci(term - 1) + fibonacci(term - 2);
    }

    return result;
}

/* Calculate base to the power of pow */
float power(float base, int pow) {
    int i = 0;
    float result = 1;
    
    for(i = 0; i < pow ; i++){
      result *= base;
    }
    
    return result;
}

/* Calculate the "sine" of a given radius */
float sine(float radius) {
    float rad = 0;
    float result = 0;
    float chunkOne = 0;
    float chunkTwo = 0;
    float chunkThree = 0;

    rad = radius * (PI / 180);
    chunkOne =  (power(rad, 3) / factorial(3));
    chunkTwo =  (power(rad, 5) / factorial(5));
    chunkThree = (power(rad, 7) / factorial(7));

    result = rad - chunkOne + chunkTwo - chunkThree;
    return result;
}

/* Calculate the "cosine" of a given radius */
float cosine(float radius) {
    float rad;
    float result;
    float chunkOne = 0;
    float chunkTwo = 0;
    float chunkThree = 0;
      
    rad = radius * (PI / 180);
    chunkOne =  (power(rad, 2) / factorial(2));
    chunkTwo =  (power(rad, 4) / factorial(4));
    chunkThree = (power(rad, 6) / factorial(6));
    
    result = 1 - chunkOne + chunkTwo - chunkThree;
    return result;
}

// print out the operations that require only one "int" variable
void print1IntOp(char *operation, int operand, char *operSymbol, int result) {
    printf("%s %d%s = %d\n", operation, operand, operSymbol, result);
}

// print out the operations that require only one "float" variable
void print1FloatOp(char *operation, float operand, char*operSymbol, float result) {
    printf("%s %.4f%s = %.4f\n", operation, operand, operSymbol, result);
}

// Print out the operation that consists of two float operands and a result
void printSci2FloatOper(char *operation, float operandA, char *operSymbol, float operandB, float result) {
    printf("%s %.4f %s %.4f = %.4f\n", operation, operandA, operSymbol, operandB, result);
}

void matrixSum(){

    int i;
    int j;
    int n1;
    int m1;
    int n2;
    int m2;

    printf("Enter the number of rows of matrix 1:");
    scanf("%d", &n1);
    printf("Enter the number of columns of matrix :");
    scanf("%d", &m1);
    printf("Enter the number of rows of matrix 2:");
    scanf("%d", &n2);
    printf("Enter the number of columns of matrix 2:");
    scanf("%d", &m2);
    if(n1 == n2 && m1 == m2){

        float a[n1][m1];
        float b[n2][m2];
        float c[n1][m1];


        for(i = 0; i < n1; i++){
                printf("Enter the members of matrix 1 row %d :\n", i+1);
            for(j = 0; j < m1; j++){
                printf("member %d :", j+1);
                scanf("%f", &a[i][j]);
            }
        }

        for(i = 0; i < n2; i++){
                printf("Enter the members of matrix 2 row %d :\n", i+1);
            for(j = 0; j < m2; j++){
                printf("member %d :", j+1);
                scanf("%f", &b[i][j]);
            }
        }

        for(i = 0; i < n1; i++){
            for(j = 0; j < m1; j++){
                c[i][j] = a[i][j] + b[i][j];
            }
        }

        printf("\nThe sum of both matrices is:\n");

        for(j = 0; j < m1; j++){
            for(i = 0; i < n1; i++){
                printf(" %.0f",c[i][j]);
            }
            printf("\n");
        }
    } else{
        printf("\nThe matrices are incompatible\n");
    }
    
}
void matrixProduct(){

    int i;
    int j;
    int n1;
    int m1;
    int n2;
    int m2;

    printf("Enter the number of rows of matrix 1:");
    scanf("%d", &n1);
    printf("Enter the number of columns of matrix :");
    scanf("%d", &m1);
    printf("Enter the number of rows of matrix 2:");
    scanf("%d", &n2);
    printf("Enter the number of columns of matrix 2:");
    scanf("%d", &m2);
   
    //Kurtis section 63-119
    //sets points of the matrix
    float a[n1][m1];    
    float b[n2][m2];
    float c[n1][m1];

    //build matrix 1
    for(i = 0; i < n1; i++){
        printf("Enter the members of matrix 1 row %d :\n", i+1);
        for(j = 0;j < m1;j++){      
            printf("member %d :", j+1);
            scanf("%f", &a[i][j]);
        }
    }
    
    //build matrix 2
    for(i = 0; i < n2; i++){
        printf("Enter the members of matrix 2 row %d :\n", i+1);
        for(j = 0; j < m2; j++){
            printf("member %d :", j+1);
            scanf("%f", &b[i][j]);
        }
    }
    
    //generates the product
    c[i][j] = 1;
    
    for(i = 0; i < n1; i++){
        for(j = 0; j < m2; j++){
            c[i][j] = 0;
            c[i][j] += a[i][j] * b[i][j];
        }
    }
    
    //prints the product
    printf("\nThe product of the matrix is:\n");
    
    for(j = 0; j < m1; j++){
        for(i = 0; i < n2; i++){
            printf(" %.0f", a[i][j]);
        }
        printf("\n");
    }

}

void matrixTranspose(){

    int i;
    int j;
    int n;
    int m;

    printf("Enter the number of rows:");
    scanf("%d", &n);
    printf("Enter the number of columns:");
    scanf("%d", &m);
    
    //sets rows and colums of the matrix
    float a[n][m];

    //builds matrix
    for(i = 0; i < n; i++){
        printf("Enter the members of row %d :\n", i+1);
        for(j = 0; j < m; j++){
            printf("member %d :", j+1);
            scanf("%f", &a[i][j]);
        }
    }
    
    //generates the transpose
    printf("\nThe transpose of the matrix is:\n");
    for(j = 0; j < m; j++){
        for(i = 0; i < n; i++){
            printf(" %.0f", a[i][j]);
        }
        printf("\n");
    }

}

/**
* This is a Factorial Function that computes a factorial
* of N.
*
* Example:
*    n=5
*
*    5! = 5x4x3x2x1 = 120
*
* NOTE: Factorial function inefficient for values of N > 20
*/

unsigned long long int fact(int n) {
    unsigned long long int fact = 1;
    int i;

    for (i = n; i > 0; i--) {
        fact *= i;
    }
    return fact;
}

void time() {
    
    int to; //final conversion type
    double t1;
    double t2;

    printf("Convert seconds to which type:");
    printf("\n1.minutes\n2.hours\n3.days\n4.weeks\n5.months\n6.years"
           "\n7.Decades\n8.centuries\n9.milleniums\n10.generations\n");
    printf("Convert to(number):");
    scanf("%d", &to);
    
    printf("Enter the number of seconds:");
    scanf("%lf", &t1);
            
        // seconds to minutes
        if(to == 1){
            t2 = t1 / 60;
                
            if(t2 <= 1 && t2 >= 0){
                printf("\n%f seconds = %f minute", t1, t2);
            } else if (t1 == 1){
                printf("\n1 second = %f minute", t2);
            } else {
                printf("\n%f seconds = %f minutes", t1, t2);
            }
        }     
            
            // seconds to hours
        if(to == 2){
            t2 = t1 / 3600;
            
            if(t2 <= 1 && t2 >= 0){
                printf("\n%f seconds = %f hour", t1, t2);
            } else if (t1 == 1){
                printf("\n1 second = %f hour", t2);
            } else {
                printf("\n%f seconds = %f hours", t1, t2);
            }
        }         
            
            // seconds to days
        if(to == 3){
            t2 = t1 / (3600 * 24);
                
            if(t2 <= 1 && t2 >= 0){
                printf("\n%f seconds = %f day", t1, t2);
            } else if (t1 == 1){
              printf("\n1 second = %f day", t2);
            } else {
              printf("\n%f seconds = %f days", t1, t2);
            }
        }
           
        // seconds to weeks
        if(to == 4){
            t2 = t1 / (3600 * 24 * 7);
                
            if(t2 <= 1 && t2 >= 0){
                printf("\n%f seconds = %f week", t1, t2);
            } else if(t1 == 1){
                printf("\n1 second = %f week", t2);
            } else {
                printf("\n%f seconds = %f weeks", t1 , t2);
            }
        }

        // seconds to months
        if(to == 5){
            t2 = t1 / (3600 * 24 * 30);

            if(t2 <= 1 && t2 >= 0){
                printf("\n%f seconds = %f month", t1, t2);
            } else if(t1 == 1){
                printf("\n1 second = %f month", t2);
            } else {
                printf("\n%f seconds = %f months", t1, t2);
            }
        }

        // seconds to years
        if(to == 6){
            t2 = t1 / (3600 * 24 * 365.25);

            if(t2 <= 1 && t2 >=0 ){
                printf("\n%f seconds = %f year ", t1, t2);
            } else if(t1 == 1){
                printf("\n1 second = %f year", t2);
            } else {
                printf("\n%f seconds = %f years", t1, t2);
            }
        }
           
        // seconds to decades
        if(to == 7){
            t2 = t1 / (3600 * 24 *365.25 * 10);

            if(t2 <= 1 && t2 >= 0){
                printf("\n%f seconds = %f decade", t1, t2);
            } else if(t1 == 1){
                printf("\n1 second = %f decade", t2);
            } else {
                printf("\n%f seconds = %f decades", t1, t2);
            }
        }
            
        // seconds to centuries
        if(to == 8){
            t2 = t1 / (3600 * 24 * 365.25 *100);
                
            if(t2 <= 1 && t2 >= 0){
                printf("\n%f seconds = %f century", t1, t2);
            }else if(t1 == 1){
                printf("\n1 second = %f century", t2);
            }else {
                printf("\n%f seconds = %f centuries", t1, t2);
            }
        }
           
        // seconds to millenia
        if(to == 9){
            t2 = t1 / (3600 * 24 * 365.25 * 1000);
            
            if(t2 <= 1 && t2 >= 0){
                printf("\n%f seconds = %f millenium", t1, t2);
            }else if(t1 == 1){
                printf("\n1 second = %f millenium", t2);
            }else {
                printf("\n%f seconds = %f milleniums", t1, t2);
             }
         }

        // seconds to generations
        if(to == 10){
            t2 = t1 / (3600 * 24 * 365.25 * 30);

            if(t2 <= 1 && t2 >= 0){
                printf("%f seconds = %f Generation", t1, t2);
            }else if(t1 == 1){
                printf("1 second = %f Generation", t2);
            }else {
                printf("%f seconds = %f Generations", t1, t2);
            }
        }

  } //time()

void temp(){
    
    int from;
    int to;
    double t1;
    double t2;
  
    /*prints index for operation commands*/
    printf("1.Celsius\n2.Fahrenheit\n3.Kelvin");
    printf("\nConvert from(number):");
    /*inputs operation command for coverting from*/
    scanf("%d", &from);
    printf("Convert to(number):");
    /*inputs operation command for coverting to*/
    scanf("%d", &to);
    printf("Enter temperature:");
    /*inputs value to convert*/
    scanf("%lf", &t1);

    /*checks if conversion is the same*/
    if (from == to) {
        printf("The resulting temperature remains the same: %f", t1);
    } else {
    /*switch statements for from with switch for to inside*/
    /*for conversion*/
        switch (from) {
            case 1: // Celcius
                switch (to) {
                    case 2:
                        t2 = t1 * 9 / 5 + 32.0;
                        printf("\n%fC = %fF\n", t1, t2);
                        break;
                    case 3:
                        t2 = t1 + 273.15;
                        printf("\n%fC = %fK\n", t1, t2);
                        break;
                    default:
                        break;
                }
                break;
            case 2: // Fahrenheit
                switch (to) {
                    case 1:
                        t2 = (t1 - 32.0) * 5 / 9;
                        printf("\n%fF = %fC\n", t1, t2);
                        break;
                    case 3:
                        t1 = (t1 - 32.0) * 5 / 9;
                        t2 = t1 + 273.15;
                        printf("\n%fF = %fK\n", t1, t2);
                        break;
                    default:
                        break;
                }
                break;
            case 3: // Kelvin
                switch (to) {
                    case 1:
                        t2 = t1 - 273.15;
                        printf("\n%fK = %fC\n", t1, t2);
                        break;
                    case 2:
                        t2 = (t1 - 273.15) * 9 / 5 + 32;
                        printf("\n%fK = %fF\n", t1, t2);
                        break;
                    default:
                        break;
               }
            default:
                break;
        }

    }
}

void scientificCalculator(){
    bool isRunning = true;

    float operandA = 0;
    float operandB = 0;
    float result = 0;

    float r1 = 0;
    float r2 = 0;

    int operationNumber = 0;


    while(isRunning){

        switch (sciCalcMenu()){
            
            case POWER:
                system("clear");
                operandA = input("Enter base: ");
                operandB = input("Enter power: ");
                result = power(operandA, operandB);
                printSci2FloatOper("\nresult: ", operandA, "^", operandB, result);
                break;

            case FACTORIAL:
                system("clear");
                operandA = input("Enter number of terms: ");
                result = fact(operandA);
                printf("\n");
                print1IntOp("\nFactorial: ", operandA, "!", result);
                break;

            case FIBONACCI:
                system("clear");
                operandA = input("Enter fibonacci term to show: ");
                result = fibonacci(operandA);
                print1IntOp("\nFibonacci term", operandA, "", result);
                break;

            case SINE:
                system("clear");
                operandA = input("Enter your value: ");
                result = sine(operandA);
                print1FloatOp("\nSine of", operandA, "", result);
                break;

            case COSINE:
                operandA = input("Enter your value: ");
                result = cosine(operandA);
                print1FloatOp("\nCosine of", operandA, "", result);
                break;

            case TANGENT:
                system("clear");
                operandA = input("Enter your value: ");
                r1 = sine(operandA);
                r2 = cosine(operandA);
                result = r1 / r2;
                print1FloatOp("\nTangent of", operandA, "", result);
                break;

            case COSECANT:
                system("clear");
                operandA = input("Enter your value: ");
                result = sine(operandA);
                result = (1 / result);
                print1FloatOp("\nCosecant of", operandA, "", result);
                break;

            case SECANT:
                system("clear");
                operandA = input("Enter your value: ");
                r1 = sine(operandA);
                r2 = cosine(operandA);
            
                if (r2 != 0) {
                    result = r1 / r2;
                }
            
                printf("\n");
                if (result != 0) {
                    result = (1 / result);
                    print1FloatOp("Cotangent of", operandA, " ", result);
                }
                break;

            case MATRIX:
                system("clear");
                printf("1.Sum of Matrices\n2.Transpose\n3.Product of Matrices");
                printf("\nEnter an operation command:");
                scanf("%d", &operationNumber);

                switch (operationNumber) {
                    case 1:
                        matrixSum();
                        break;
                    case 2:
                        matrixTranspose();
                        break;
                    case 3:
                        matrixProduct();
                        break;
                    default:
                        break;
                }
                break;

            case CONVERSION:
                system("clear");
                printf("1.Temperature\n2.Time");
                printf("\nPlease choose an operation number:");
                scanf("%d", &operationNumber);

                switch (operationNumber) {
                    case 1:
                        temp();
                        break;
                    case 2:
                        time();
                        break;
                    default:
                        break;
                }
                break;

            case BACKFROMSCI:
                system("clear");
                isRunning = false;
                break;
            
            default:
                system("clear");
                break;

        }

    }

}