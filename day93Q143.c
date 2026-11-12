//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include <stdio.h>


struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;

    if (scanf("Name: %49s\n", s.name) != 1) return 1;
    if (scanf("Roll: %d\n", &s.roll_no) != 1) return 1;
    if (scanf("Marks: %d", &s.marks) != 1) return 1;

  
    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);

    return 0;
}