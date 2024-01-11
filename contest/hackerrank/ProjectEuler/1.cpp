#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin>>t;

    while (t--) {
        ll n, sum = 0;
        cin >> n;

        n--;

        ll multiples_of_3 = n / 3;
        ll multiples_of_5 = n / 5;
        ll multiples_of_15 = n / 15;

        sum = (3 * multiples_of_3 * (multiples_of_3 + 1) / 2) +
              (5 * multiples_of_5 * (multiples_of_5 + 1) / 2) -
              (15 * multiples_of_15 * (multiples_of_15 + 1) / 2);

        cout << sum << endl;
    }
}


/*
You can optimize the code by using the arithmetic series formula to calculate the sum of multiples of 3 and 5 separately. The formula for the sum of the first k multiples of a number m is given by m * (k * (k + 1)) / 2.

This approach avoids the need for a loop, making the solution more efficient. It computes the sum of multiples of 3 and 5 separately, then subtracts the sum of multiples of 15 to avoid double-counting.
*/