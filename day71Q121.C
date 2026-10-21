//Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char line[2048];

    if (!fgets(line, sizeof(line), stdin)) return 0;

    int nums[1005];
    int n = 0;

    char *start = strchr(line, '[');
    char *end = strchr(line, ']');
    
    char *ptr = start ? start + 1 : line;
    char *limit = end ? end : line + strlen(line);

    while (ptr < limit && *ptr != '\0') {
        int sign = 1;
        if (*ptr == '-') {
            sign = -1;
            ptr++;
        } else if (*ptr == '+') {
            ptr++;
        }

        if (isdigit((unsigned char)*ptr)) {
            int val = 0;
            while (isdigit((unsigned char)*ptr)) {
                val = val * 10 + (*ptr - '0');
                ptr++;
            }
            nums[n++] = sign * val;
        } else {
            ptr++;
        }
    }

    if (n == 0) return 0;

   
    int freq[1005] = {0};
    int repeated = -1;

    for (int i = 0; i < n; i++) {
        int val = nums[i];
        if (val >= 0 && val < 1005) {
            if (freq[val] == 1) {
                repeated = val;
                break;
            }
            freq[val] = 1;
        }
    }


    printf("%d\n", repeated);

    return 0;
}