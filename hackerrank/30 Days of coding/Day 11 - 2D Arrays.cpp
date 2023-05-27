#include<iostream>
using namespace std;

int main(){
    int arr[6][6];
    int hoursSum=0, max=-100;

    //GETTING INPUT
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cin>>arr[i][j];
        }
        
    }

    //CALCULATIN MAX NUMBER
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
           hoursSum = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
           if (hoursSum>max) max=hoursSum;
        }
        
    }
    cout<<max<<endl;
    
    

}