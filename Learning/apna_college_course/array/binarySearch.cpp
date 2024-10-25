#include<bits/stdc++.h>
using namespace std;


int binarySearch(int arr[], int n, int value){
    int start=0;
    int end=n;

    while (start<=end)
    {
        int mid=(start+end)/2;
        if(arr[mid]==value) return mid;
        else if(arr[mid]>value){
            end=mid-1;
        }else{
            start=mid+1;
        }

    }

    return -1;
    
} 
int main(){
    int n;
    cout<<"What is the size of array?: ";
    cin>>n;
    int arr[n];

    cout<<"Enter the elements of array"<<endl;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"What you want to search in array?: ";
    int value;
    cin>>value;

    cout<<binarySearch(arr, n, value)<<endl;

return 0;
}