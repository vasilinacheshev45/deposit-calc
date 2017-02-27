#include <stdio.h>
#include <stdlib.h>
int main()
{
    int day, sum, dox;
    printf("Vvedite summu:");
    scanf("%d", &sum);
    printf("Vvedite dey");
    scanf("%d", &day);
 if (sum<100000)
    {
    dox=1;
    }
if (day>365||day<0)
    {
            printf("Error at day\n");
            printf("Vvedite day\n");
            scanf("%d", &day);
        }
    if(day>0&&day<30)
    {
       day=1;
    }
    if(day>=31&&day<=120)
    {
        day=2;
    }
    if (day>=121&&day<=240)
    {
        day=3;
    }
    if (day>=241&&day<=365)
    {
        day=4;
    }
 switch (day)
    {
    case 1: if (dox=1&&sum>1000) {
            sum=sum-(sum*10)/100;
             printf("%d", sum); break;}
            else {
                if(sum>10000)
                    {
                    sum=sum-(sum*10)/100;
                    printf("%d", sum);}
            break; }
    case 2:if (dox=1&&sum>1000) {
            sum=sum+(sum*2)/100;
             printf("%d", sum); break;}
            else {
                if(sum>10000)
                    {
                    sum=sum+(sum*3)/100;
                    printf("%d", sum);}
            break; }
    case 3: if (dox=1&&sum>1000) {
            sum=sum+(sum*6)/100;
             printf("%d", sum); break;}
            else {
                if(sum>10000)
                    {
                    sum=sum+(sum*8)/100;
                    printf("%d", sum);}
            break; }
    case 4: if (dox=1&&sum>1000) {
            sum=sum+(sum*12)/100;
             printf("%d", sum); break;}
            else {
                if(sum>10000)
                    {
                    sum=sum+(sum*15)/100;
                    printf("%d", sum);}
            break; }
        default:
        printf("Error at summa\n");
    }
    return 0;
}
