/* Tim, Saqif, Evan part */ 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "scientific.h"
#include "regular.h"
#include "accountant.h"
#include "additionalFunctions.h"


// Main operarion
int main(void) {
    bool isRunning = true;
    system("clear");
   
    while(isRunning){
    
        switch (mainMenu()){

            case REGULAR:
                system("clear");
                regularCalculator();
                break;

            case SCIENTIFIC:
                system("clear");
                scientificCalculator();
                break;

            case ACCOUNTANT:
                system("clear");
                accountantCalculator();
                break;

            case HELP:
                system("clear");
                readHelpFile();
                break;

            case EXIT:
                isRunning = false;
                break;
            
            default:
                break;
        }

    }

    return 0;
}


