//Q85: Reverse a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    

    scanf("%s", str);
    
    int len = strlen(str);
    int start = 0;
    int end = len - 1;
    

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        start++;
        end--;
    }
    
    printf("%s\n", str);
    
    return 0;
}