#include<stdio.h>


int get_square(int n){
    return n * n;
}


int main(){

    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < n; i++)
    {
        printf("%d ", get_square(arr[i]));
    }


}