//Q61: Search for an element in an array using linear search.
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
    
    long long target;

    scanf("%lld", &target);
    
    int found_index = -1; 
    

    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found_index = i;
            break; 
        }
    }
    

    if (found_index != -1) {
        printf("Found at index %d\n", found_index);
    } else {
        printf("-1\n");
    }
    
    return 0;
}
