//Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100000

static char input[MAX * 8];
static int arr[MAX];

int cmp(const void *a, const void *b) {
    int x = *(const int *)a, y = *(const int *)b;
    return (x > y) - (x < y);   
}

int main(void) {
    if (fgets(input, sizeof(input), stdin) == NULL) return 0;


    char *start = strrchr(input, '[');
    char *end = start ? strchr(start, ']') : NULL;
    if (!start || !end) return 0;

   
    int n = 0;
    char *p = start + 1;
    while (p < end && n < MAX) {
        char *q;
        long val = strtol(p, &q, 10);
        if (q == p) { p++; continue; }   
        arr[n++] = (int)val;
        p = q;
    }
    if (n == 0) return 0;

    
    int k = 0;
    char *kp = strchr(end, 'k');
    if (kp) {
        kp++;
        while (*kp && *kp != '-' && (*kp < '0' || *kp > '9')) kp++;
        if (*kp) k = (int)strtol(kp, NULL, 10);
    }
    if (k < 1 || k > n) {
        printf("Invalid k\n");
        return 0;
    }

   
    qsort(arr, n, sizeof(int), cmp);
    printf("%d\n", arr[k - 1]);
    return 0;
}
