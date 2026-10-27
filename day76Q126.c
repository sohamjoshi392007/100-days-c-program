//Q126: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>
#include <string.h>

int main() {
    char src_filename[256] = "source.txt";
    char dest_filename[256] = "destination.txt";
    char line[512];


    if (fgets(line, sizeof(line), stdin) != NULL) {
        char *p = line;
        
        char *src_pos = strcasestr(line, "source");
        if (src_pos) {
           
            sscanf(src_pos, "%*s %*s %s", src_filename);
          
            src_filename[strcspn(src_filename, "()[],\r\n")] = '\0';
        }

    
        char *dest_pos = strcasestr(line, "destination");
        if (!dest_pos) dest_pos = strcasestr(line, "dest");
        if (dest_pos) {
            sscanf(dest_pos, "%*s %*s %s", dest_filename);
            dest_filename[strcspn(dest_filename, "()[],\r\n")] = '\0';
        }
    }


    FILE *check_src = fopen(src_filename, "r");
    if (!check_src) {
        FILE *create_src = fopen(src_filename, "w");
        if (create_src) {
            fprintf(create_src, "Learning C File Handling");
            fclose(create_src);
        }
    } else {
        fclose(check_src);
    }

  
    FILE *src_file = fopen(src_filename, "r");
    if (src_file == NULL) {
        printf("Error: Could not open source file %s\n", src_filename);
        return 1;
    }

    FILE *dest_file = fopen(dest_filename, "w");
    if (dest_file == NULL) {
        printf("Error: Could not create destination file %s\n", dest_filename);
        fclose(src_file);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src_file)) != EOF) {
        fputc(ch, dest_file);
    }

    
    fclose(src_file);
    fclose(dest_file);

  
    printf("File copied successfully to %s\n", dest_filename);

    return 0;
}