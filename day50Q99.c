//Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main() {
    char dateStr[20];
    int day, month, year;


    char *months[] = {
        "", "Jan", "Feb", "Mar", "Apr", "May", "Jun", 
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };


    if (scanf("%s", dateStr) == 1) {
       
        sscanf(dateStr, "%d/%d/%d", &day, &month, &year);

        if (month >= 1 && month <= 12) {
            printf("%02d-%s-%d\n", day, months[month], year);
        } else {
            printf("Invalid Month\n");
        }
    }

    return 0;
}