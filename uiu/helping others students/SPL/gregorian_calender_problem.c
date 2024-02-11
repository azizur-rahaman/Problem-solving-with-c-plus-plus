#include<stdio.h>



int main(){

int day,month,year;
char ignore;

scanf("%d%c%d%c%d", &day, &ignore, &month, &ignore, &year);

int h = (day + ((13 * (month + 1)) / 5) + (year%100) + ((year%100) / 4) + ((year/100) / 4) - 2 * (year/100)) % 7;


if(day > 31 || month > 12) {
    printf("Invalid dates");
    return 0;
}

if(h == 0) printf("Saturday\n");
else if(h == 1) printf("Sunday\n");
else if(h == 2) printf("Monday\n");
else if(h == 3) printf("Tuesday\n");
else if(h == 4) printf("Wednesday\n");
else if(h == 5) printf("Thursday\n");
else printf("Friday\n");


}