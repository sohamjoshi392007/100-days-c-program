//Q131: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.
#include <stdio.h>

int main() {

    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open numbers.txt\n");
        return 1;
    }

    int num;
    long long sum = 0;
    int count = 0;


    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }


    fclose(file);

    if (count == 0) {
        printf("Sum = 0\n");
        printf("Average = 0.00\n");
    } else {
        double average = (double)sum / count;
        printf("Sum = %lld\n", sum);
        printf("Average = %.2f\n", (float)average);
    }

    return 0;
}