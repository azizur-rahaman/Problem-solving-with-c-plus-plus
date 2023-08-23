#include<bits/stdc++.h>
using namespace std;

int main(){
    int user_input;
    cin>>user_input;

    int arr[5] = {5,4,3,2,1};
    int result= 0;

    for (int i = 0; i < 5; i++)
    {
        result+=user_input/arr[i];
        user_input=user_input%arr[i];
    }
    
    cout<<result<<endl;  
}