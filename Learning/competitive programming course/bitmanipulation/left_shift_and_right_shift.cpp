#include<bits/stdc++.h>
using namespace std;

int main(){
    int x = 14;
    int y = 1;
    int z = 2;

    cout<< "Left shift: " <<endl;
    cout << (x<<y) <<endl; // x * pow(2,y)
    cout << (x>>z) << endl; // x * (pow(2,z))

    cout<< "Right shift: " <<endl;
    cout << (x>>y) <<endl; // x * pow(2,y)
    cout << (x>>z) << endl; // x * (pow(2,z))

}