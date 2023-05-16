#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    int n;
    double dn;
    string str;
    cin>>n>>dn;
    
    getline(cin,str);
    getline(cin,str);
       
    cout<<(i+n)<<endl;
    cout<<fixed<<setprecision(1)<<(d+dn)<<endl;
    cout<<(s+str)<<endl;

    return 0;
}