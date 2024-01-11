#include<bits/stdc++.h>
using namespace std;

void print_names_n_times(int n){
    if(n==0) return;
    cout<<"Names"<<endl;
    print_names_n_times(n-1);
}

int main(){
    print_names_n_times(5);
}