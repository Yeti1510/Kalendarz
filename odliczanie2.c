#include <stdio.h>

int main() {
    int month;
    
    scanf("%d", &month);
    

    if (month < 1 || month > 12) {
        printf("blad\n");
    }

    if (month == 1) {
		int day_styczen;
        printf("styczen\n");
        scanf("%d",&day_styczen);
        if(day_styczen<1 || day_styczen>31){
			printf("bład");
		}
		else{
			printf("%d",day_styczen);
		}
    }
    



return 0;
}
