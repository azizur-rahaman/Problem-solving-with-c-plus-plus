#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long t_c;
    cin >> t_c;

    while (t_c--) {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;

    cout<< ((a- (b/ (c+d)))) <<endl;
    
    }
    

    return 0;
}
