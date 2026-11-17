//Q146: Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>


struct Date {
    int day;
    int month;
    int year;
};


struct Employee {
    char name[50];
    int id;
    struct Date joiningDate;
};

int main() {
    struct Employee emp;

    if (scanf("Employee: %49s | ID: %d | Joining Date: %d %d %d",
              emp.name,
              &emp.id,
              &emp.joiningDate.day,
              &emp.joiningDate.month,
              &emp.joiningDate.year) != 5) {
        return 1;
    }

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           emp.name,
           emp.id,
           emp.joiningDate.day,
           emp.joiningDate.month,
           emp.joiningDate.year);

    return 0;
}