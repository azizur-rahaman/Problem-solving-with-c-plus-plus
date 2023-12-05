
// Problem - 4 
#include<stdio.h>

int main(){
    int a=1;
    float b=2.0;
    char c = 'a';

    printf("The integer value: %d\n", a);
    printf("The float value: %0.2f\n", b);
    printf("The char value: %c", c);

    return 0;
}



// Problem - 5
#include<stdio.h>

int main(){
    int s_number;
    float score;
    char  grade;

    scanf("%d %f %c", &s_number, &score, &grade);

    return 0;
}

// Problem - 6
#include<stdio.h>

int main(){
    int d;
    float e;
    char  f;

    scanf("%d %f %c", &d, &e, &f);
    return 0;
}

// Problem - 7
#include<stdio.h>

int main(){
    int d;
    float e;
    char  f;

    scanf("%d %f %c", &d, &e, &f);

    printf("The integer value: %d\n", d);
    printf("The float value: %f\n", e);
    printf("The char value: %c", f);

    return 0;
}


// Problem - 8
#include<stdio.h>

int main(){
    int d,e,f;

    scanf("%d %d %d", &d, &e, &f);

    printf("2nd Value = %d\n", e);

    return 0;
}


// Problem - 9 (i)
#include<stdio.h>

int main(){
    int a,b;

    scanf("%d %d", &a, &b);

    float x = ( (3 * a*a) + (2.01 * b*b))/ ( (5.16 * b*b) + (2.1 *a*a*a));

    return 0;
}


// Problem - 10 (ii)
#include<stdio.h>

int main(){
    int a,b;

    scanf("%d %d", &a, &b);

    float x = ( (3 * pow(a,2)) + (2.01 * pow(b,2)))/ ( (5.16 * b*b) + (2.1 * pow(a,3)));

    return 0;
}
