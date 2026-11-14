//Q145: Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n = 3;
    struct Student students[3];

    
    for (int i = 0; i < n; i++) {
        if (scanf("%s %d %d", students[i].name, &students[i].roll, &students[i].marks) != 3) {
            return 1;
        }
    }

    
    int maxIndex = 0;

   
    for (int i = 1; i < n; i++) {
        if (students[i].marks > students[maxIndex].marks) {
            maxIndex = i;
        }
    }

   
    printf("Topper: %s (Marks: %d)\n", students[maxIndex].name, students[maxIndex].marks);

    return 0;
}