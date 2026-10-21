//Q120: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number
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

    
    int xor_val = 0;
    for (int j = 0; j <= n; j++) {
        xor_val ^= j;
    }
    for (int j = 0; j < n; j++) {
        xor_val ^= nums[j];
    }

 
    printf("%d\n", xor_val);

    return 0;
}