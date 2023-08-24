#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string result = "EASY";
    cin>>n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;

        if(temp==1){
            result="HARD";
            break;
        }
    }
    cout<<result<<endl;
    
}