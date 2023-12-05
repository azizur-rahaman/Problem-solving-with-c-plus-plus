#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        long long square_i = (long long)i * i;
        cout << ( (square_i * (square_i - 1)) / 2 - 4 * (i - 1) * (i - 2) ) << endl;
    }
}
