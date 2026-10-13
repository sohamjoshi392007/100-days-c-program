//Q114: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
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

    if (n == 0) return 0;

    long long maxSoFar = arr[0];
    long long currSum = arr[0];

    for (int i = 1; i < n; i++) {
        if (currSum < 0) {
            currSum = arr[i];
        } else {
            currSum += arr[i];
        }

        if (currSum > maxSoFar) {
            maxSoFar = currSum;
        }
    }

    printf("%lld\n", maxSoFar);

    return 0;
}