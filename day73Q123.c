//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char line[512];

    if (!fgets(line, sizeof(line), stdin)) return 0;

    char name[100] = "";
    int age = 0;

    char *name_ptr = strstr(line, "Name:");
    char *age_ptr = strstr(line, "Age:");

    if (name_ptr) {
        name_ptr += 5; 
        while (*name_ptr == ' ' || *name_ptr == '\t') name_ptr++;
        int i = 0;
        while (*name_ptr != '\0' && *name_ptr != ',' && *name_ptr != '\r' && *name_ptr != '\n') {
            name[i++] = *name_ptr++;
        }
        name[i] = '\0';
    
        while (i > 0 && name[i-1] == ' ') {
            name[--i] = '\0';
        }
    }

    if (age_ptr) {
        age_ptr += 4; 
        while (*age_ptr == ' ' || *age_ptr == '\t' || *age_ptr == ':') age_ptr++;
        sscanf(age_ptr, "%d", &age);
    } else {
        
        sscanf(line, "%s %d", name, &age);
    }

  
    FILE *file = fopen("info.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    
    fprintf(file, "Name: %s\nAge: %d\n", name, age);
    
    fclose(file);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}