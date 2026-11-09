//Q138: Print all enum names and integer values using a loop.
#include <stdio.h>


enum TrafficLight {
    RED = 0,
    YELLOW,
    GREEN
};

int main() {

    const char *colorNames[] = {"RED", "YELLOW", "GREEN"};
   
    int colorValues[] = {RED, YELLOW, GREEN};
    
    int totalElements = 3;

   
    for (int i = 0; i < totalElements; i++) {
        printf("%s=%d\n", colorNames[i], colorValues[i]);
    }

    return 0;
}