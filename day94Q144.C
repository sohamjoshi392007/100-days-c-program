//Q144: Store details of 5 students in an array of structures and print all.
#include <stdio.h>


struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student students[5];

 
    for (int i = 0; i < 5; i++) {
        scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks);
    }

   
    printf("Name\tRoll\tMarks\n");
    printf("---------------------\n");

    
    for (int i = 0; i < 5; i++) {
        printf("%s\t%d\t%d\n", students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}