//Q132: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

typedef struct {
    char name[50];
    int roll;
    int marks;
} Student;

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);


    FILE *file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open file for writing.\n");
        return 1;
    }

    Student s;
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", s.name);
        
        printf("Roll Number: ");
        scanf("%d", &s.roll);
        
        printf("Marks: ");
        scanf("%d", &s.marks);

  
        fprintf(file, "%s %d %d\n", s.name, s.roll, s.marks);
    }
    
    fclose(file); 

   
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file for reading.\n");
        return 1;
    }

    printf("\n--- Reading Records from students.txt ---\n");
    while (fscanf(file, "%s %d %d", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll, s.marks);
    }

    fclose(file); 

    return 0;
}