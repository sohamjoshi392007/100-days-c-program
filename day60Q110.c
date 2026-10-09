// Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[1000];
    int arr[100];
    int n = 0;

    
    if (fgets(input, sizeof(input), stdin) == NULL) {
        return 0;
    }

   
    char *start = strchr(input, '[');
    char *end = strchr(input, ']');

    if (start != NULL && end != NULL) {
        *end = '\0'; 
        start++;     

      
        char *token = strtok(start, ", ");
        while (token != NULL) {
            arr[n++] = atoi(token);
            token = strtok(NULL, ", ");
        }
    }

    
    for (int i = 0; i < n; i++) {
        int prevGreater = -1;

      
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break; 
            }
        }

       
        if (i == n - 1) {
            printf("%d\n", prevGreater);
        } else {
            printf("%d, ", prevGreater);
        }
    }

    return 0;
}