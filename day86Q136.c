//Q136: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>
#include <string.h>


typedef enum {
    INVALID = 0,
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;


Status getStatusEnum(const char *str) {
    if (strcmp(str, "SUCCESS") == 0) return SUCCESS;
    if (strcmp(str, "FAILURE") == 0) return FAILURE;
    if (strcmp(str, "TIMEOUT") == 0) return TIMEOUT;
    return INVALID;
}

int main() {
    char input[20];
    

    if (scanf("%s", input) != 1) return 1;

    Status status = getStatusEnum(input);

  
    switch (status) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Invalid status\n");
    }

    return 0;
}