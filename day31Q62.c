//Q62: Reverse an array without taking extra space.
#include <stdio.h>

int main() {
    int n;
    
   
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }
    
    long long arr[n]; 
    
  
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    
    int left = 0, right = n - 1;
    while (left < right) {
        long long temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
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