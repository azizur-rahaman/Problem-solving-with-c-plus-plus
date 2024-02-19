#include<stdio.h>
#include<stdbool.h>
 
void main(){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
 
    int arr[n];
 
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
 
    int search;
    printf("Enter the number to search for: ");
    scanf("%d", &search);
 
    int j = 0;
    int indexes[n];
 
    bool isFound = false;
 
    for (int i = 0; i < n; i++)
        if(arr[i] == search) {
            isFound = true;
            indexes[j] = i;
            j++;
        }
    printf("Frequency of %d is: %d\n", search, j);
    printf("indexes: ");
    for(int i=0; i < j; i++)
        printf("%d ", indexes[i]);
 
 
    // int replace;
 
    // if(isFound) {
    //     printf("Enter the number to replace with: ");
    //     scanf("%d", &replace);
    // }
 
 
    // for(int i=0; i < j; i++)
    //     arr[indexes[i]] = replace;
 
    // if(isFound){
    //     printf("Modified Array:\n");
    //     for (int i = 0; i < n; i++)
    //     printf("%d ", arr[i]);
    // }else printf("Not Found\n");
 
}