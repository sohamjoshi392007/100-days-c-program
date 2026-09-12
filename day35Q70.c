//Q70: Rotate an array to the right by k positions.
#include <stdio.h>

int main() {
    int n, k;
    

    scanf("%d", &n);
    
    int arr[100]; 
    

    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    

    scanf("%d", &k);
    
 
    k = k % n;
    
    int temp[100];
    

    for(int i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }
    

    for(int i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }
    

    for(int i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
    

    for(int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if(i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}