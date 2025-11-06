#include <stdio.h>
#include <stdbool.h>

int main() {
    
    int month;
    int day;
    int month_luty;
    int year;

    printf("Podaj miesiac: ");
    scanf("%d", &month);
    printf("Podaj dzien: ");
    scanf("%d", &day);
    printf("Podaj rok: ");
    scanf("%d",&year);
    
    if (year < 1600 || year > 9999||year==6969) {
		
        printf("Blad: rok < 1600 lub rok > 9999\n");
        if(year==6969){
			
			printf("pedofil i matol");
			return 1;
		              }
            return 1;
    }

    
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("Rok jest przestepny\n");
        month_luty = 29;
    } else {
        printf("Rok jest zwykly\n");
        month_luty = 28;
    }

    
    if (month < 1 || month > 12) {
        printf("blad miesiaca\n");
        return 0;
    }

    
    if (month == 2) {
        if (day < 1 || day > month_luty) {
            printf("blad lutego\n");
        } else {
            printf("%d lutego %d\n", day,year);
        }
    }

    
    if (month == 1) {
        if (day < 1 || day > 31) {
            printf("blad dnia\n");
        } else {
            printf("%d stycznia %d\n", day,year);
        }
    }

    if (month == 3) {
        if (day < 1 || day > 31) {
            printf("blad dnia\n");
        } else {
            printf("%d marca %d\n", day,year);
        }
    }

    return 0;
}
