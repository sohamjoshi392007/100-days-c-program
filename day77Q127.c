//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
#include <string.h>

int main() {
    char filename[256] = "data.txt";
    char appended_text[512] = "This is appended text.";
    char line[1024];


    if (fgets(line, sizeof(line), stdin) != NULL) {
      
        char *txt_pos = strstr(line, ".txt");
        if (txt_pos) {
            char *start = txt_pos;
            while (start > line && *(start - 1) != ' ' && *(start - 1) != ':' && *(start - 1) != '=') {
                start--;
            }
            int len = txt_pos - start + 4;
            if (len > 0 && len < 256) {
                strncpy(filename, start, len);
                filename[len] = '\0';
            }
        }

       
        char *input_pos = strcasestr(line, "User Input:");
        if (input_pos) {
            input_pos += 11; // skip "User Input:"
            while (*input_pos == ' ' || *input_pos == '\t') input_pos++;
            strcpy(appended_text, input_pos);
            appended_text[strcspn(appended_text, "\r\n")] = '\0';
        }
    }

 
    FILE *check = fopen(filename, "r");
    if (!check) {
        FILE *init_file = fopen(filename, "w");
        if (init_file) {
            fprintf(init_file, "Hello world");
            fclose(init_file);
        }
    } else {
        fclose(check);
    }

    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    fprintf(file, "\n%s", appended_text);

    fclose(file);

    
    printf("File updated successfully with appended text.\n");

    return 0;
}