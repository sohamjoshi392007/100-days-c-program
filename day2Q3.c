//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>

int main() {
    int length, breadth;
    
    // Read length and breadth from input
    scanf("%d %d", &length, &breadth);
    
    // Calculate area and perimeter
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    
    // Display the results in the exact requested format
    printf("Area=%d, Perimeter=%d\n", area, perimeter);
    
    return 0;
}