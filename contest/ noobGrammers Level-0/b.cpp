#include<bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
    ll n;
    cin >> n;

    ll total = 1;  
    ll temp = 0;

    while (temp <= n) {
        ll t_cubes = total * (total + 1) / 2;  

        if (temp + t_cubes <= n) {
            temp += t_cubes;
            total++;
        } else break;  
        
    }

    cout << total - 1 << endl; 

    return 0;
}
