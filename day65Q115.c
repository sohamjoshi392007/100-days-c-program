//Q115: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100000

static char input[MAX * 8];
static int arr[MAX];
static int negIdx[MAX];

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
    if (k <= 0) k = 1;
    if (k > n) k = n;


    int head = 0, tail = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) negIdx[tail++] = i;
        if (i >= k - 1) {
            while (head < tail && negIdx[head] <= i - k) head++;
            int result = (head < tail) ? arr[negIdx[head]] : 0;
            printf(i == n - 1 ? "%d\n" : "%d ", result);
        }
    }
    return 0;
}