/* Tim part */ 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "additionalFunctions.h"
#include "accountant.h"


// Print out the value of a given variable 
void showValue(char *description, float value) {
    printf("%s: %.4f\n", description, value);
}


// Get the maximum value in the array
float getMaximum(float *set, int numOfTerms){
    return set[numOfTerms-1]; //-1 to get correct index
}


// Get the minimum value in the array
float getMinimum(float *set){
    return set[0];
}


// Calculate the average of the total values in the array
float getAverage(float *set, int numOfTerms){
    int i;
    float sum = 0;

    for(i = 0; i < numOfTerms; i++){
        sum += set[i];
    }

    return (sum / numOfTerms);
}


// Calculate the range between the macimum and the minimum value
float getRange(float max, float min){
    return (max - min);
}


// Calculate the median value in the array
float getMedian(float *set, int numOfTerms){
    float median = 0;
    float midVal = set[ ( (numOfTerms+1) / 2 ) - 1 ];

    if( (numOfTerms % 2) != 0 ){
        median = midVal;
    } else {
        median = ( (midVal) + (midVal + 1) ) / 2; // If even number of terms, then median is average of middle 2 values
    }

    return (median);
}


// Calulate the mode value of the array (PASS exists BY REFERENCE!!)
float getMode(float *set, int numOfTerms, bool* exists){
    int i;
    int j;
    int modeFreq = 0;
    float mode = 0; 
    int *freq = malloc (numOfTerms * sizeof(int));
    
    memset (freq, 0, sizeof (int) * numOfTerms);

    *exists = true; // as of now, assume a mode does exist

    // Calculate the frequency of every term in the set
    for(i = 0; i < numOfTerms; i++){
        for(j = 0; j < numOfTerms; j++){
            if(set[j] == set[i]){
                freq[i]++;
            }
        }
    }

    // Set the number with the largest frequency as the mode
    modeFreq = freq[0];
    mode = set[0];
    for(i = 0; i < numOfTerms; i++){
        if(freq[i] > modeFreq){
            modeFreq = freq[i];
            mode = set[i];
        }
    }

    // Check for multiple modes, if yes, then set exists to false indicating that the mode does not exist and return
    for(i = 0; i < numOfTerms; i++){
        if( (set[i] != mode) && (modeFreq == freq[i]) ){
            free(freq);
            *exists = false;
            return (mode);
        }
    } 

    free(freq);
    return (mode);
}


// Prints out the current sorted set 
void showSortedSet(float *set, int numOfTerms){
    int i;
    for (i = 0; i < numOfTerms; i++) {
        printf("%.3f ", set[i]);
    }
}


// Creates the Set of values that we will be working with
float *setAccArr(int numOfTerms){
    float *set = malloc (sizeof(float) * numOfTerms);
    float temp = 0;
    int i, j;

    for (i = 0; i < numOfTerms; i++) {
        set[i] = inputArr("Enter value terms", i);
    }

    // Sorts the terms from least to greatest
    for(i = 0; i < numOfTerms; i++){
        for(j = 0; j <= i; j++){
            if(set[j] > set[i]){
                temp = set[j];
                set[j] = set[i];
                set[i] = temp;
            }
        }
    }

    return set;
}


// Allow the user to input a number at a specific index in the array (used in setAccArr) (unmodified from the original version)
float inputArr(char *description, int num){
    float key;
    char temp[9999];

    do{
        printf("%s[%d]: ", description, num+1);
        if(!scanf("%f", &key)){
            scanf("%s", temp); //recieves
            printf("Please try again!\n");
        } else {
            return key;
        }
    } while(1);   
}



// Runs the main operation for the accountant calculator 
void accountantCalculator(){
    bool isRunning = true;

    float max = 0;
    float min = 0;
    float avg = 0;
    float range = 0;
    float median = 0;
    float mode = 0;
    bool modeExists = true; 
    
    system("clear");
    
    printf("\n===========================\n");
    printf("Accountant Calculator Menu\n");
    printf("===========================\n");
    printf("Please set the values in your set:\n");
    int numOfTerms = input("Enter number of terms: "); // need this for later calculations, thats why it's here
    float *set = setAccArr(numOfTerms);

    system("clear");
    
    
    while(isRunning){

        switch (accCalcMenu()){

            case MAXIMUM:
                system("clear");
                max = getMaximum(set, numOfTerms);
                showValue("\nThe maximum value in the set is", max);
                break;

            case MINIMUM:
                system("clear");
                min = getMinimum(set); //-1 to get correct index
                showValue("\nThe minimum value in the set is", min);
                break;

            case AVERAGE:
                system("clear");
                if(numOfTerms != 0){
                    avg = getAverage(set, numOfTerms);
                } else {
                    avg = 0;
                }
                showValue("\nThe average value of the set is", avg);
                break;

            case RANGE:
                system("clear");
                max = getMaximum(set, numOfTerms);
                min = getMinimum(set);
                range = getRange(max, min);
                showValue("\nThe range of the set is", range);
                break;
            
            case MEDIAN:
                system("clear");  
                if(numOfTerms != 0){
                    median = getMedian(set, numOfTerms);
                } else {
                    median = 0;
                }
                showValue("\nThe median of the set is", median);
                break;

            case MODE:
                system("clear");
                mode = getMode(set, numOfTerms, &modeExists);
                if(modeExists == false){
                    printf("\nThe set does not have a mode or has multiple modes\n");
                } else {
                    showValue("\nThe mode of the set is", mode);
                }
                break;

            case SHOWVAL:
                system("clear");
                printf("\nThe current set of numbers is: ");
                if(numOfTerms != 0){
                    showSortedSet(set, numOfTerms);
                } else {
                    printf("empty");
                }
                printf("\n");
                break;

            case NEWSET:
                system("clear");
                free(set);
                printf("\n===========================\n");
                printf("Accountant Calculator Menu\n");
                printf("===========================\n");
                numOfTerms = input("Enter number of terms: ");
                set = setAccArr(numOfTerms);
                system("clear");
                break;

            case BACKFROMACC:
                system("clear");
                isRunning = false;
                break;
            
            default:
                system("clear");
                break;
        }

    }
}
