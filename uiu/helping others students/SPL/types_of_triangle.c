#include<stdio.h>
#include<math.h>
#define FLOATING_COMPARISON 0.00001

int main(){
    float a1, a2, b1, b2, c1, c2;
    scanf("%f %f %f %f %f %f", &a1, &a2, &b1, &b2, &c1, &c2);

    float aLength = sqrt(pow((b1 - a1), 2) + pow((b2 - a2), 2));
    float bLength = sqrt(pow((c1 - b1), 2) + pow((c2 - b2), 2));
    float cLength = sqrt(pow((a1 - c1), 2) + pow((a2 - c2), 2));

    if (aLength <= 0 || bLength <= 0 || cLength <= 0 || (aLength + bLength) <= cLength || (aLength + cLength <= bLength) || (bLength + cLength <= aLength)) printf("Invalid\n");
    else if ( (aLength == bLength) || (bLength==cLength)) printf("Equilateral\n");
    else if (aLength == bLength || aLength == cLength || bLength == cLength) printf("Isosceles\n");
    else printf("Scalene\n");

    return 0;
}
