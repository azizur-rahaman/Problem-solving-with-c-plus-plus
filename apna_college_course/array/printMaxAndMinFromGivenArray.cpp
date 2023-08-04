#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int givenArray[n];

    for (int i = 0; i < n; i++)
    {
        cin>>givenArray[i];
    }

    int maxNum=INT_MIN;
    int minNum=INT_MAX;

    for (int i = 0; i < n; i++)
    {
        maxNum=max(maxNum, givenArray[i]);
        minNum=min(minNum,givenArray[i]);
    }
    
    cout<<"Max Number: "<<maxNum<<endl;
    cout<<"Min Number: "<<minNum<<endl;

    return 0;
}