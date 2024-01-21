#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll count_i = 0, count_j = 0;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            ll temp;
            cin >> temp;
            if (temp == 1) {
                count_i = i;
                count_j = j;
                break;
            }
        }
    }

    ll result = abs(3 - count_i) + abs(3 - count_j);
    cout << result << endl;

    return 0;
}
