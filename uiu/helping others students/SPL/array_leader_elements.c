#include<stdio.h>
#include<stdbool.h>

int main(){
    
    int n;
    scanf("%d", &n);
    int arr[n];

    printf("Array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Leaders: ");

    for (int i = 0; i < n-1; i++)
    {   
        int maxx = arr[i];
        bool flag = true;

        for (int j = i+1; j < n; j++)
        {
            if(maxx <= arr[j]){
                flag = false;
            }
        }

        if(flag) printf("%d, ", maxx);
        
    }

    printf("%d", arr[n-1]);
    
    
}