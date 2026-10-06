//Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[1000];
    int nums[100];
    int answer[100];
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
            nums[n++] = atoi(token);
            token = strtok(NULL, ", ");
        }
    }

    if (n == 0) return 0;

   
    answer[0] = 1;
    for (int i = 1; i < n; i++) {
        answer[i] = answer[i - 1] * nums[i - 1];
    }

   
    int rightProduct = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] = answer[i] * rightProduct;
        rightProduct *= nums[i];
    }

   
    printf("[");
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%d", answer[i]);
        } else {
            printf("%d,", answer[i]);
        }
    }
    printf("]\n");

    return 0;
}