#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string input;
    getline(cin, input);
    set<char> result;
  

    for (int i = 0; i < input.length(); i++)
    {
        if(input[i]>='a' && input[i]<= 'z'){
            result.insert(input[i]);
        }
    }


  
    cout<<result.size()<<flush;
    
}