//Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
 
    int arr[n + 1]; 
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int target;
    scanf("%d", &target); 
    

    int i = n - 1;
    while (i >= 0 && arr[i] > target) {
        arr[i + 1] = arr[i]; 
        i--;
    }
    

    arr[i + 1] = target;
    

    for (int j = 0; j <= n; j++) {
        printf("%d ", arr[j]);
    }
    printf("\n");
    
    return 0;
}