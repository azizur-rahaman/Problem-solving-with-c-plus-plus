#include <bits/stdc++.h>
using namespace std;

int main () {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    map<int, int> indicies;

    for (int i = 0; i < n; i++) indicies[arr[i]] = i;

    int counter = 1;

    for (int i = 1; i < n; i++)
    {
        if(indicies[i] > indicies[i+1]) counter++;
    }



    cout << counter << endl;
}