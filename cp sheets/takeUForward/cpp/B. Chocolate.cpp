// Add the necessary headers
#include <vector>        // for std::vector
#include <set>           // for std::set
#include <map>           // for std::map
#include <algorithm>     // for std::max_element, std::min_element, etc.
#include <queue>         // for std::priority_queue
#include <iostream>      // for std::cout, std::cin
#include <utility>       // for std::pair
// #include<bits/stdc++.h>

using namespace std;

#define LL            long long LL
#define F              first


const LL N = 2e5 + 5;

void solve() {
    LL n, a[N], ans = 0;
    cin>>n;
	for(LL i=1;i<=n;i++)
		cin>>a[i];
	LL cur = 1e18;
	for(LL i=n;i>=1;i--)
	{
		cur = min(cur - 1, a[i]);
		cur = max(0LL, cur);
		ans += cur;
	}
	cout<<ans;
    
}

int main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	clock_t z = clock();


	LL t = 1;
//	cin >> t;
	while (t--) solve();


	return 0;
}