//Q68: Delete an element from an array.
#include <stdio.h>

int main() {
    int n, pos;
    
    
    scanf("%d", &n);
    
    int arr[100]; 
    
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    scanf("%d", &pos);
    
    
    for(int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
   
    n--;
    
   
    for(int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if(i < n - 1) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}