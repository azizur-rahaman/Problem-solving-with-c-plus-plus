
/*

9876543210
876543210
76543210
6543210
543210
43210
3210
210
10
0

*/


#include<iostream>
using namespace std;

int main(){
    
    int k=1, rows;

    printf("Enter number of rows:");
    scanf("%d", &rows);
    int d_rows = rows * 2;

    for (int i = 0; i < rows; i++)
    {   
        int k= (rows-1)-i;
        for (int j = 0; j < rows-i; j++)
        {
            printf("%d", k);
            k--;
        }
        
        printf("\n");
        
    }
    
}