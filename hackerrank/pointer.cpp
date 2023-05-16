#include<iostream>

void update(int *a, int *b){
    int sum=*a+*b;
    int differece;
    if(*a>*b){
        differece=*a-*b;
    }else{
        differece=*b-*a;
    }
    *a=sum;
    *b=differece;
}
int main(){
    int a,b;
    int *pa = &a, *pb= &b;
    scanf("%d %d", &a, &b);

    update(pa,pb);
    printf("%d\n%d",a,b);

}