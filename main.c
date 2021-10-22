#include <stdio.h>
#include "bubblesort.h"
#define SWAP(t,x,y) do {\
                    t temp = x;\
                    t x =(t)(y);\
                    y = temp;} while(0);

/* (After attempting with pointer and address value manipulation, I ended
up searching online for a solution)
#define SWAP(x,y) (x==y ? void:do{\
                    *x = *x + *y;\
                    *y = *x - *y;\
                    *x = *x - *y;} while(0);)
*/

int main(void){

    int unsorted[] = {1,5,20,76,13,4,7,8,8,8,888};
    int i;
    int len = sizeof(unsorted)/sizeof(unsorted[0]);

    printf("Unsorted int array: {");

    for(i = 0; i < len; i++){
        printf("%d,", unsorted[i]);
    }

    printf("}\n");

    bubble_sort_int(unsorted, len);

    printf("Sorted int array: {");

    for(i = 0; i < len; i++){
        printf("%d,", unsorted[i]);
    }
    
    
    printf("}\n");
    

    char str[] = "abaccus";
    int len_str = sizeof(str)/sizeof(str[0]);


    printf("Unsorted string: %s, string length: %d\n", str, len_str);

    bubble_sort_str(str,len_str);

    printf("Sorted string: %s\n", str);


    return 0;
}