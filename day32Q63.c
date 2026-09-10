//Q63: Merge two arrays.
#include <stdio.h>

int main() {
    int n1;
    
    if (scanf("%d", &n1) != 1 || n1 < 0) {
        return 0;
    }
    
    long long arr1[n1];
    
    for (int i = 0; i < n1; i++) {
        scanf("%lld", &arr1[i]);
    }
    
    int n2;
    
    if (scanf("%d", &n2) != 1 || n2 < 0) {
        return 0;
    }
    
    long long arr2[n2];
    
    for (int i = 0; i < n2; i++) {
        scanf("%lld", &arr2[i]);
    }
    
    int total_size = n1 + n2;
    long long merged[total_size]; 
    
    
    for (int i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }
    

    for (int i = 0; i < n2; i++) {
        merged[n1 + i] = arr2[i];
    }
    
    
    for (int i = 0; i < total_size; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%lld", merged[i]);
    }
    
   
    printf("\n");
    
    return 0;
}