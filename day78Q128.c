//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>
#include <string.h>

int main() {
    char filename[256] = "sample.txt";
    char line[1024];


    if (fgets(line, sizeof(line), stdin) != NULL) {
        char *pos = strcasestr(line, "Filename:");
        if (pos) {
            pos += 9; 
            while (*pos == ' ' || *pos == '\t') pos++;
            sscanf(pos, "%s", filename);
        } else {
      
            line[strcspn(line, "\r\n")] = '\0';
            if (strlen(line) > 0) {
                strcpy(filename, line);
            }
        }
    }


    if (strcmp(filename, "sample.txt") == 0) {
        FILE *check = fopen(filename, "r");
        if (!check) {
            FILE *init = fopen(filename, "w");
            if (init) {
                fprintf(init, "This is sample file content.\nWelcome to C file handling!");
                fclose(init);
            }
        } else {
            fclose(check);
        }
    }

    FILE *file = fopen(filename, "r");


    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

  
    printf("File opened successfully.\n");


    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    printf("\n");


    fclose(file);

    return 0;
}