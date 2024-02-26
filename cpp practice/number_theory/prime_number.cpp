#include <bits/stdc++.h>
using namespace std;

void sieve(int n){ 
     
}




int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	clock_t z = clock();

int n;
cin>>n;


  vector<int> primes(n+1, 0);
    vector<int> pr;
    for (int i = 2; i < n; i++)
    {
        if(primes[i] == 0){
            pr.pb(i);
            for (int j = i*i; j < n; j += i)
            {
                primes[j] = 1;
            }        
        }
        primes[i] ^= 1;
    }
    print(pr); 
}