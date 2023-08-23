#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    
    for (int i = 0; i < k; i++)
    {
        if(n%10==0){
            n/=10;
        }else{
            n--;
        }
    }
    
    cout<<n<<endl;
}

    //2nd solution

    // string n_str = to_string(n);

    // for (int i = 0; i < k; i++)
    // {
    //     if((n_str[n_str.length()-1]-'0')==0){
    //         n=n/10;
    //         n_str=to_string(n);
    //     }else{
    //         n--;
    //         n_str=to_string(n);
    //     }

    // }