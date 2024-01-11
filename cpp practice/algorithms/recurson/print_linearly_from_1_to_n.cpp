#include<bits/stdc++.h>
using namespace std;

void print_linearly_from_1_to_n(int i, int n){
    if(i>n) return;

    cout<<i<<endl;
   
    print_linearly_from_1_to_n(i+1,n);
}

int main(){
    print_linearly_from_1_to_n(1,5);
}