#include "functions.h"

void bubble_sort (int arr[], int size)
{
    // swapped needs to be the same as the length
    // it is a flag that counts number of traversals
    int swapped = 0;
    while (swapped != (size - 1)) {
        swapped = 0;

        for (int i = 1; i < (size); i++) {
            if (arr[i-1] > arr[i]) {
                int temp = arr[i-1];
                arr[i-1] = arr[i];
                arr[i] = temp;
            } else {
                swapped++;
            }
        }
    }
}


/*
   |Demonstration|
   ---------------
    
   i    | 0 1 2 3 4 5 6 7
   arr[]| 5 4 1 8 3 2 7 6

   i    | 0 1 2 3 4 5 6 7
   arr[]| 1 2 3 4 5 6 7 8    

*/
