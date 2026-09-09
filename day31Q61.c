//Q61: Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int n;
    
    // Read the number of elements
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }
    
    long long arr[n]; // Variable Length Array to store the elements
    
    // Read the array elements
    for (int i = 0; i < n; i++) {
        scanf("%lld", &arr[i]);
    }
    
    long long target;
    // Read the element to search for
    scanf("%lld", &target);
    
    int found_index = -1; // Initialize index to -1 (indicating not found by default)
    
    // Perform linear search by iterating through the array
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found_index = i;
            break; // Exit the loop as soon as the element is found
        }
    }
    
    // Print the result based on whether the element was found
    if (found_index != -1) {
        printf("Found at index %d\n", found_index);
    } else {
        printf("-1\n");
    }
    
    return 0;
}