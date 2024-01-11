#include<bits/stdc++.h>
using namespace std;

void print_n_to_1_using_bactracking(int i, int n){
    
    if(i>n) return;

    print_n_to_1_using_bactracking(i+1, 5);
    cout<<i<<endl;
}

int main(){
    print_n_to_1_using_bactracking(1,5);
}

