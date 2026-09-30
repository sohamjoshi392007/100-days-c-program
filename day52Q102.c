//Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>

int main() {
    int arr[100];
    int n = 0;
    int x;


    while (scanf("%d", &arr[n]) == 1) {
        n++;
        char ch = getchar();
        if (ch == '\n') break; 
    }

   
    scanf("%d", &x);

    int low = 0, high = n - 1;
    int ceilIndex = -1;

   
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ceilIndex = mid;  
            high = mid - 1;   
        } else {
            low = mid + 1;    
        }
    }

   
    printf("%d\n", ceilIndex);

    return 0;
}