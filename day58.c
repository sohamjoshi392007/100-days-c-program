//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int findMajorityElement(int nums[], int n) {
    if (n == 0) return -1;

  
    int candidate = nums[0];
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i] == candidate) {
            count++;
        } else {
            count--;
            if (count == 0) {
                candidate = nums[i];
                count = 1;
            }
        }
    }

 
    int actualCount = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            actualCount++;
        }
    }

    return (actualCount > n / 2) ? candidate : -1;
}

int main() {
    char buffer[1000];

    
    if (!fgets(buffer, sizeof(buffer), stdin)) {
        printf("-1\n");
        return 0;
    }


    char *start = strchr(buffer, '[');
    char *end = strchr(buffer, ']');

    if (!start || !end || start >= end) {
        printf("-1\n");
        return 0;
    }

    *end = '\0';
    start++; 

    int nums[1000];
    int n = 0;


    char *token = strtok(start, ", ");
    while (token != NULL) {
        nums[n++] = atoi(token);
        token = strtok(NULL, ", ");
    }


    printf("%d\n", findMajorityElement(nums, n));

    return 0;
}