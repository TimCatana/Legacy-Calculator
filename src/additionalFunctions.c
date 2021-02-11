/* Tim, Saqif and Evan Part */
#include <stdio.h>
#include <stdlib.h>

#include "additionalFunctions.h"



// Get user input
float input(char *inname){
    float key;
    char temp[9999];

    while(1){
        printf("%s", inname);
        if(!scanf("%f", &key)){
            scanf("%s", temp);  //recieve temp
            printf("Please try again!\n");
        } else {
            return key;
        }
    }

}

// Print the main menu in terminal
calculatorCode mainMenu(){
    printf("\n====\n");
    printf("Menu\n");
    printf("====\n");
    printf("1.Regular Calculator\n");
    printf("2.Scientific Calculator\n");
    printf("3.Acountant Calculator\n");
    printf("4.Read Help and Notice\n");
    printf("0.Exit\n");
    return (input("Select Menu: "));
}

// Print the regular calculator menu in terminal
regularCalc regCalcMenu(){
    printf("\n=======================\n");
    printf("Regular Calculator Menu\n");
    printf("=======================\n");
    printf("1.Add\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");
    printf("0.Back\n");
    return (input("Select Menu: "));
}

// Print the regular calculator menu in terminal
accountantCalc accCalcMenu(){
    printf("\n===========================\n");
    printf("Accountant Calculator Menu\n");
    printf("===========================\n");
    printf("1.Show maximum value\n");
    printf("2.Show minimum value\n");
    printf("3.Show average\n");
    printf("4.Show range\n");
    printf("5.Show median\n");
    printf("6.Show mode\n");
    printf("7.Show sorted set\n");
    printf("8.Create new set\n");
    printf("0.Back\n");
    return (input("Select Menu: "));
}


// Print the regular calculator menu in terminal
scientificCalc sciCalcMenu(){
    printf("\n===========================\n");
    printf("Scientific Calculator Menu\n");
    printf("===========================\n");
    printf("1.Power function\n");
    printf("2.Factorial Series\n");
    printf("3.Fibonacci Series\n");
    printf("4.Sine\n");
    printf("5.Cosine\n");
    printf("6.Tangent\n");
    printf("7.Cosecant\n");
    printf("8.Secant\n");
    printf("9.Matrix functions\n");
    printf("10.Conversion functions\n");
    printf("0.Back\n");
    return (input("Select Menu: "));
}







// Read and print the user help file to the terminal (for the help menu)
void readHelpFile(){
    char text;
    FILE *help;

    help = fopen("src/User_helping.txt", "r");

    while ((text = fgetc(help)) != EOF) {
        fprintf(stdout, "%c", text);
    }

    fclose(help);
}