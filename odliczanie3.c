#include <stdio.h>

int main() {
    int year;
    int month;

    
    printf("Podaj rok: ");
    scanf("%d", &year);

    
    if (year < 1600 || year > 9999) {
        printf("Blad: rok < 1600 lub rok > 9999\n");
        return 1;
    }

    
    if (year % 4 == 0 && year % 100==0 && year % 400==0){
        printf("Rok jest przestepny\n");
        month = 29;
    } else {
        printf("Rok jest zwykly\n");
        month = 28;
    }

    // Optional: print the number of days in February
    printf("Liczba dni w lutym: %d\n", month);

    return 0;
}
