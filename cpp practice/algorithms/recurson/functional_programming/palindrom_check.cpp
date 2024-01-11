#include<bits/stdc++.h>
using namespace std;

bool reverse_n(string ss, int i, int len){

    if(i==len) return ;
    int result = ((n % 10) * 10) + reverse_n(n/10, i+1, len);
    return result;

}

int main(){
    string n;
    cin>>n;

    int reverse = reverse_n(n, 0, n.length());

    cout<<reverse<<endl;


}