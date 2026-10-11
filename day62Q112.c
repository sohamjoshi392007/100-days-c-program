//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[1000];
    int arr[100];
    int n = 0;
    int k = 0;


    if (fgets(input, sizeof(input), stdin) == NULL) {
        return 0;
    }

  
    char *k_ptr = strstr(input, "k =");
    if (k_ptr != NULL) {
        k = atoi(k_ptr + 3);
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

    if (n == 0 || k <= 0 || k > n) {
        return 0;
    }


    long long windowSum = 0;
    long long maxSum = 0;

    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }
    maxSum = windowSum;


    for (int i = k; i < n; i++) {
        windowSum += arr[i] - arr[i - k]; 
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }


    printf("%lld\n", maxSum);

    return 0;
}