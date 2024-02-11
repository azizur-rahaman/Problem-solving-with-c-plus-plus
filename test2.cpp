#include <stdio.h>
#include<math.h>

int main() {
    
int dHour, dMinute;
int mHour, mMinute;

scanf("%d %d %d %d", &dHour, &dMinute, &mHour, &mMinute);

int houreDifference = (dHour - mHour) * 60;
int result = (houreDifference + dMinute) - mMinute;

// Here output showing in Minute

printf("%d", result);

}
