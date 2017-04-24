#include "deposit.h"

int main()
{
    int date, vklad;

    printf("Срок вклада:");
    scanf("%d", &date);
    printf("Сумма вклада:");
    scanf("%d", &vklad);
	
	if (error_date(date) == 0){
		printf("Ошибка в сроке");
	}
	if (error_vklad(vklad) == 0){
		printf("Ошибка в сумме");
	}
    if ((error_date(date) == 1) && (error_vklad(vklad) == 1)){
        vklad = vklad_time_of_expiry(date, vklad);
        printf("Cумма вклада после срока:%d",vklad );
    } 

    return 0;
}
