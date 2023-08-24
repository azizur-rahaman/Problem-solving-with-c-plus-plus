#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int test_case[13]={4,7,44,47,74,77,444,447,474,477,744,747,777};
    string result = "NO";
    cin>>n;

    for (int i = 0; i < 13; i++)
    {
        if(n%test_case[i]==0){
            result="YES";
            break;
        }
    }
    
    cout<<result<<endl;
}