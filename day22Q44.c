//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.
#include <stdio.h>

int main() {
    int n;
    

    scanf("%d", &n);
    
    double sum = 0.0;
    

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            sum += 1.0; 
        } else {
           
            double term = (double)(2 * i - 1) / (2 * i);
            sum += term;
        }
    }
    
    printf("Approximate sum: %.1f\n", sum);
    
    return 0;
}