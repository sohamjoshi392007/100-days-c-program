//Q69: Find the second largest element in an array.
#include <stdio.h>

int main() {
    int n;
    
    
    scanf("%d", &n);
    
    int arr[100]; 
    
  
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
   
    int largest = -2147483648; 
    int second = -2147483648;
    
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            
            second = largest;

            largest = arr[i];
        } 
        else if(arr[i] > second && arr[i] != largest) {
            
            second = arr[i];
        }
    }
    
 
    printf("%d\n", second);
    
    return 0;
}