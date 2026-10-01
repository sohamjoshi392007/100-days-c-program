//Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

#include <stdio.h>

int main() {
    int nums[10000];
    int n = 0;
    char ch;


    while ((ch = getchar()) != EOF && ch != '\n') {
        if ((ch >= '0' && ch <= '9') || ch == '-') {
            ungetc(ch, stdin);
            if (scanf("%d", &nums[n]) == 1) {
                n++;
            }
        }
    }

    if (n == 0) {
        printf("-1\n");
        return 0;
    }

    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += nums[i];
    }

    int leftSum = 0;
    int pivot = -1;

    for (int i = 0; i < n; i++) {
        if (leftSum == totalSum - leftSum - nums[i]) {
            pivot = i;
            break;
        }
        leftSum += nums[i];
    }

    printf("%d\n", pivot);
    return 0;
}