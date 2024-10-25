#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int getIthBit(int n, int pos){
    return (n & (1<< pos - 1)) == 0? 0 : 1;
}

int main(){
    int x,pos;
    cout<<"Give me number and Position: "<<endl;
    cin>>x>>pos;

    cout<< getIthBit(x,pos) <<endl;

}

