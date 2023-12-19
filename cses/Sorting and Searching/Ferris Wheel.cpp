#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,x;
    cin>>n>>x;

    vector<long long> arr;
    for (long long i = 0; i < n; i++)
    {   
        long long temp;
        cin>>temp;
        arr.push_back(temp);
    }
    
    sort(arr.begin(), arr.end());

    long long counter = 0;
    long long j=n-1;

    for (long long i = 0; i <= j; i++)
    {   

        for (j; j>=i; j--)
        {   
            counter++;

            if(arr[i]+ arr[j] <= x) {
                --j;
                break;
            }
        }
    }
    
    cout<<counter<<endl;
    
    
}