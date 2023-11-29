#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    
    n= t;

    int arr[n];
   for (int i = 0; i < n; i++)
   {
        cin>>arr[i];
   }
   

    sort(arr,arr+n);

    int counter = 0, medium = arr[n/2];


    for (int i = 0; i < n; i++)    
    {
        counter+= abs(medium - arr[i]);
    }
    
    cout<<counter;
    
}