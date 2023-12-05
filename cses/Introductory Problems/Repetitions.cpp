#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int total = 0, counter=0;

    for (int i = 0; i < s.length(); i++)
    {
        if(i==0 || s[i]==s[i-1]) counter++;
        else {
            total = max(total,counter);
            counter=1;
        }
    }
    
total=max(total,counter);

    cout << total << endl;
}
