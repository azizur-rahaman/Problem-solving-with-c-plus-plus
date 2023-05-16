
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int nline, nqueries;
    cin>>nline>>nqueries;
    string tagList[nline];
    string queryList[nqueries];

    for (int i=0; i<nline; i++) {
        getline(cin,tagList[i]);
    }
    for (int i=0; i<nqueries; i++) {
        getline(cin,queryList[i]);
    }

    for (int i=0; i<nqueries; i++) {
        cout<<queryList[i]<<endl;
    }
    return 0;
}
