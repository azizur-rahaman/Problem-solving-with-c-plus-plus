#include<bits/stdc++.h>
using namespace std;

void tower_of_honai(int n, char s, char d, char a){
    
    if(n==0) return;

    tower_of_honai(n-1, s, a, d);
    cout<<s<<" "<<d<<endl;
    tower_of_honai(n-1, a, d, s);
}

int main(){
    int n;
    cin>>n;
    cout<< pow(2,n) - 1<<endl;
    
    tower_of_honai(n, '1', '3', '2');

}