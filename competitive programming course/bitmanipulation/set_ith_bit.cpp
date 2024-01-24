#include<bits/stdc++.h>
using namespace std;

int set_ith_bit_0(int n, int pos){

    int mask = ~(1<<pos - 1);
    return (n & mask);
}

int set_ith_bit_1(int n, int pos){

    int mask = (1 << pos -1);

    return (n | mask);
}

int main(){
    int x, pos;
    cin>>x>>pos;

    
    cout<<"set_0: "<<set_ith_bit_0(x,pos)<<endl;
    cout<<"set_1: "<<set_ith_bit_1(x,pos);

}