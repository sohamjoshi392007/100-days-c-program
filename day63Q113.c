//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.
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

    for (int i = 0; i <= n - k; i++) {
        int maxVal = arr[i];
        for (int j = i + 1; j < i + k; j++) {
            if (arr[j] > maxVal) {
                maxVal = arr[j];
            }
        }
        
        if (i == n - k) {
            printf("%d\n", maxVal);
        } else {
            printf("%d ", maxVal);
        }
    }

    return 0;
}