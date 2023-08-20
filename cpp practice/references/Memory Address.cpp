#include<bits/stdc++.h>
using namespace std;

int main(){
    string food ="Pizza";
    string &meal = food;

    cout<<&meal;
    cout<<&food;
}