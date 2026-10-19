//Q119: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char line[2048];
   
    if (!fgets(line, sizeof(line), stdin)) return 0;

    int nums1[1005], nums2[1005];
    int m = 0, n = 0;

    
    if (strstr(line, "nums2") != NULL || strstr(line, "[") != NULL) {
        int parsing_nums2 = 0;
        int i = 0;
        while (line[i] != '\0') {
            if (line[i] == 'n' && line[i+1] == 'u' && line[i+2] == 'm' && line[i+3] == 's' && line[i+4] == '2') {
                parsing_nums2 = 1;
            }

            int sign = 1;
            int has_sign = 0;
            if (line[i] == '-') {
                sign = -1;
                has_sign = 1;
                i++;
            } else if (line[i] == '+') {
                has_sign = 1;
                i++;
            }

            if (isdigit(line[i])) {
                int val = 0;
                while (isdigit(line[i])) {
                    val = val * 10 + (line[i] - '0');
                    i++;
                }
                int num = sign * val;
                if (!parsing_nums2) {
                    nums1[m++] = num;
                } else {
                    nums2[n++] = num;
                }
            } else {
                if (has_sign) i--;
                i++;
            }
        }
    } else {
      
        int all_nums[2005];
        int total_count = 0;
        int i = 0;
        while (line[i] != '\0') {
            int sign = 1;
            int has_sign = 0;
            if (line[i] == '-') {
                sign = -1;
                has_sign = 1;
                i++;
            }
            if (isdigit(line[i])) {
                int val = 0;
                while (isdigit(line[i])) {
                    val = val * 10 + (line[i] - '0');
                    i++;
                }
                all_nums[total_count++] = sign * val;
            } else {
                if (has_sign) i--;
                i++;
            }
        }

        if (total_count > 0) {
            m = all_nums[0];
            int idx = 1;
            for (int k = 0; k < m && idx < total_count; k++) {
                nums1[k] = all_nums[idx++];
            }
            if (idx < total_count) {
                n = all_nums[idx++];
                for (int k = 0; k < n && idx < total_count; k++) {
                    nums2[k] = all_nums[idx++];
                }
            }
        }
    }

    
    int i = 0, j = 0;
    int first = 1;

    while (i < m && j < n) {
        if (!first) printf(" ");
        if (nums1[i] <= nums2[j]) {
            printf("%d", nums1[i]);
            i++;
        } else {
            printf("%d", nums2[j]);
            j++;
        }
        first = 0;
    }

    while (i < m) {
        if (!first) printf(" ");
        printf("%d", nums1[i]);
        i++;
        first = 0;
    }

    while (j < n) {
        if (!first) printf(" ");
        printf("%d", nums2[j]);
        j++;
        first = 0;
    }

    printf("\n");

    return 0;
}