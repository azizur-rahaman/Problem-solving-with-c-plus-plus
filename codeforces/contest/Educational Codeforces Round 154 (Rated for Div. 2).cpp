#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;

    while (t--)
    {
        int arr[1];
        for (int i = 0; i < 9; i++)
        {
            cin>>arr[i];
        }
        
        string str = to_string(arr[0]);
        string result = "";

        int j=0;
        while (j<9)
        {
            if(str[j]=='2' || str[j]=='4' || str[j]=='6' || str[j]=='8'){
                result+=str[j];
                
            }
            j++;
        }
       
    }
    
}