#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int check(int n){
    int coinsList[] = {100, 20, 10, 5, 1};
    int ans = 0;

    for (int i = 0; i < 5; ++i) {
        ans += n / coinsList[i];
        n %= coinsList[i];
    }

    return ans;

}
int main()
{
    int n;
    cin>>n;
    int ans = check(n);

    cout<<ans<<endl;
    return 0;
}