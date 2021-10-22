#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include "bubblesort.h"




// bubble sort






void bubble_sort_int(int unsorted[], int size){
    
    bool swaps_this_pass = true;
    int i, temp;

    while(swaps_this_pass){

        swaps_this_pass = false;

        for(i = 0; i < size - 1; i++){

            if (unsorted[i] > unsorted[i + 1]){

                temp = unsorted[i];
                unsorted[i] = unsorted[i + 1];
                unsorted[i + 1] = temp;

                swaps_this_pass = true;

            }
        }


    }


}

void bubble_sort_str(char unsorted[], int size){
    
    bool swaps_this_pass = true;
    int i;
    char temp;

    while(swaps_this_pass){

        swaps_this_pass = false;

        for(i = 0; i < size - 1; i++){

            char tempone = unsorted[i];
            char temptwo = unsorted[i + 1];

            if ((int)(tempone) > (int)(temptwo)){


                temp = unsorted[i];
                unsorted[i] = unsorted[i + 1];
                unsorted[i + 1] = temp;

                swaps_this_pass = true;

            }
        }


    }


}


int cntlower(char str[], int len){

    int count = 0;
    int i,ascii;

    for(i=0; i < len; i++){

        ascii = str[i];

        if(ascii < 123 && ascii > 96){

            count++;
        }


    }

    return count;
}