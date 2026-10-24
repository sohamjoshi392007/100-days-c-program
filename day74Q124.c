//Q124: Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.
#include <stdio.h>

int main() {
   
    FILE *file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file info.txt\n");
        return 1;
    }

    char buffer[256];


    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    fclose(file);

    return 0;
}