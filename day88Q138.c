//Q138: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>
#include <string.h>


typedef enum {
    INVALID = 0,
    ADD,
    SUBTRACT,
    MULTIPLY
} MenuChoice;


MenuChoice getChoiceEnum(const char *str) {
    if (strcmp(str, "ADD") == 0) return ADD;
    if (strcmp(str, "SUBTRACT") == 0) return SUBTRACT;
    if (strcmp(str, "MULTIPLY") == 0) return MULTIPLY;
    return INVALID;
}

int main() {
    char op[20];
    int num1, num2;
    
 
    if (scanf("%s %d %d", op, &num1, &num2) != 3) return 1;

    MenuChoice choice = getChoiceEnum(op);

   
    switch (choice) {
        case ADD:
            printf("%d\n", num1 + num2);
            break;
        case SUBTRACT:
            printf("%d\n", num1 - num2);
            break;
        case MULTIPLY:
            printf("%d\n", num1 * num2);
            break;
        default:
            printf("Invalid operation\n");
    }

    return 0;
}