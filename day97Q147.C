//Q145: Return a structure containing top student's details from a function.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

struct Student getTopStudent(struct Student arr[], int n) {
    struct Student top = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i].marks > top.marks) {
            top = arr[i];
        }
    }

    return top;
}

int main() {
    int n;
    if (scanf("%d students:", &n) != 1 || n <= 0) {
        return 1;
    }

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        if (scanf(" %49s %d %d", students[i].name, &students[i].roll, &students[i].marks) != 3) {
            return 1;
        }

        int ch = getchar();
        while (ch == ' ' || ch == '\t' || ch == '\r' || ch == '\n') {
            ch = getchar();
        }
        if (ch != ',' && ch != EOF) {
            ungetc(ch, stdin);
        }
    }

    struct Student top = getTopStudent(students, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll, top.marks);

    return 0;
}