/* Tim, Saqif and Evan Part */
/**
 * @file additionalFunctions.h
 * @author Members of Section 3 Group 4 of CIS*3250 (F20)
 * @date October 2020
 * @brief file containing the function definitions of additional functionality the calulator will need
 */
#ifndef _ADDITIONAL_FUNCTIONS_H
#define _ADDITIONAL_FUNCTIONS_H

typedef enum opt {
    EXIT,
    REGULAR,
    SCIENTIFIC,
    ACCOUNTANT,
    HELP
} calculatorCode;

typedef enum regCalc {
    BACKFROMREG,
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
} regularCalc;

typedef enum sciCalc {
    BACKFROMSCI,
    POWER,
    FACTORIAL,
    FIBONACCI,
    SINE,
    COSINE,
    TANGENT,
    COSECANT,
    SECANT,
    MATRIX,
    CONVERSION
} scientificCalc;

typedef enum accCalc {
    BACKFROMACC,
    MAXIMUM,
    MINIMUM,
    AVERAGE,
    RANGE,
    MEDIAN,
    MODE,
    SHOWVAL,
    NEWSET
} accountantCalc;


float input(char*);
void prtOp(char*, char*, int, int);
void prFloatOp(char*, char*, float, float);
void printReg2FloatOper(char*, float, char*, float, float);
void printSci2FloatOper(char*, float, char*, float, float);
void print1IntOp(char*, int, char*, int);

void readHelpFile();

void showValue(char *, float);
float *setAccArr();

calculatorCode mainMenu ();
regularCalc regCalcMenu ();
accountantCalc accCalcMenu ();
scientificCalc sciCalcMenu();

#endif