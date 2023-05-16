#include<iostream>

int max_number(int a, int b, int c, int d){
    int maxNum=0;
    int numList[4]={a,b,c,d};

    for (int  i = 0; i < 4; i++)
    {
        if(maxNum<numList[i]){
            max_number=numList[i];
        }
        
    }

    return max_number;
    
}
int main(){
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int max = max_number(a,b,c,d);
    printf("%d", max);
}