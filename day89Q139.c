//Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>
#include <string.h>

typedef enum {
    INVALID = 0,
    ADMIN,
    USER,
    GUEST
} UserRole;

UserRole getRoleEnum(const char *str) {
    if (strcmp(str, "ADMIN") == 0) return ADMIN;
    if (strcmp(str, "USER") == 0) return USER;
    if (strcmp(str, "GUEST") == 0) return GUEST;
    return INVALID;
}

int main() {
    char input[20];
    

    if (scanf("%s", input) != 1) return 1;

    UserRole role = getRoleEnum(input);


    switch (role) {
        case ADMIN:
            printf("Welcome Admin!\n");
            break;
        case USER:
            printf("Welcome User!\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Invalid role\n");
    }

    return 0;
}