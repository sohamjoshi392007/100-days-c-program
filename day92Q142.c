//Q140: Define a struct with enum Gender and print person's gender.
#include <stdio.h>
#include <string.h>


typedef enum {
    INVALID = 0,
    MALE,
    FEMALE,
    OTHER
} Gender;


typedef struct {
    Gender gender;
} Person;

int main() {
    char input[20];
   
    if (scanf("Gender=%s", input) != 1) return 1;

    Person p;

    
    if (strcmp(input, "MALE") == 0) {
        p.gender = MALE;
    } else if (strcmp(input, "FEMALE") == 0) {
        p.gender = FEMALE;
    } else {
        p.gender = OTHER;
    }

    
    switch (p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Invalid Gender\n");
    }

    return 0;
}