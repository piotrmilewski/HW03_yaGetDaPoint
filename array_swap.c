//Piotr Milewski
//Systems pd10
//HW03 -- Get to the point
//2017-06-21

#include <stdio.h>
#include <stdlib.h>

int main(){

    int i; //counter

    //seed the RNG
    srand(time(NULL));  
    
    //create, populate w/ random #s, & print array of size 10
    int arr1[10]; 
    printf("Original array: \n"); 
    for (i = 0; i < 10; i++){
        arr1[i] = rand();
        if (i==9) arr1[i] = 0;
        printf("arr1[%d]: %d \n", i, arr1[i]);
    }
   
    //create, put values in reverse from arr1, & print array of size 10
    int arr2[10];
    int *hold; //pointer
    printf("Swapped array: \n");
    for (i = 0; i < 10; i++){
        hold = &arr1[9-i];
        arr2[i] = *hold;
        printf("arr2[%d]: %d \n", i, arr2[i]); 
    }

    return 0;
}
