//Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char line[1024];
   
    if (!fgets(line, sizeof(line), stdin)) return 0;

    int all_nums[1005];
    int total_count = 0;
    int val = 0;
    int reading_num = 0;


    for (int i = 0; line[i] != '\0'; i++) {
        char c = line[i];
        if (isdigit(c)) {
            val = val * 10 + (c - '0');
            reading_num = 1;
        } else {
            if (reading_num) {
                all_nums[total_count++] = val;
                val = 0;
                reading_num = 0;
            }
        }
    }
    if (reading_num) {
        all_nums[total_count++] = val;
    }

    if (total_count < 2) return 0;

    
    int n = total_count - 1;
    int nums[1005];
    for (int i = 0; i < n; i++) {
        nums[i] = all_nums[i];
    }
    int target = all_nums[total_count - 1];

    
    int found = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found) {
        printf("-1 -1\n");
    }

    return 0;
}