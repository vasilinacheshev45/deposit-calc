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

