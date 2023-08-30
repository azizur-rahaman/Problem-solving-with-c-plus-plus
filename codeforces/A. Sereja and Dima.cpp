#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        
    int i=0,j=n-1,max_num,k=0;
    int x1=0,x2=0;
    while(i<=j)
    {
        if(arr[i]>=arr[j])
        {
           max_num=arr[i];
           i++;
        }
        else{
            max_num=arr[j];
            j--;
        }
        if(k%2==0)
          x1=x1+max_num;
        else
          x2=x2+max_num;
     k++;
    }
    cout<<x1<<" "<<x2<<endl;
    return 0;

}