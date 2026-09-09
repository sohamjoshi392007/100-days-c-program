//Q56: Read and print elements of a one-dimensional array.
#include <stdio.h>

int main() {
    int n;
    
   
    if (scanf("%d", &n) != 1) {
        return 0;
    }
    
    long long arr[n];
    
   
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    

    for (int i = 0; i < n; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%lld", arr[i]);
    }
    
   
    printf("\n");
    
    return 0;
}