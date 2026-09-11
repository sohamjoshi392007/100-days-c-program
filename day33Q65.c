//Q65: Search in a sorted array using binary search.
#include <stdio.h>


int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    
    while (low <= high) {
        int mid = low + (high - low) / 2; 
        

        if (arr[mid] == target) {
            return mid;
        }
        
   
        if (arr[mid] < target) {
            low = mid + 1;
        }
       
        else {
            high = mid - 1;
        }
    }
    
  
    return -1;
}

int main() {
    int n;
    scanf("%d", &n); 
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }
    
    int target;
    scanf("%d", &target); 
    
    int result = binarySearch(arr, n, target);
    
    if (result != -1) {
        printf("Found at index %d\n", result);
    } else {
        printf("-1\n");
    }
    
    return 0;
}