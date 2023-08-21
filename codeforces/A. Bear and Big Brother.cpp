#include<bits/stdc++.h>
using namespace std;

int main(){
    int limakW,bobW, result=0;
    cin>>limakW>>bobW;

    while (limakW<=bobW)
    {
        result++;

        limakW*=3;
        bobW*=2;
    }
    
    cout<<result<<endl;    
}