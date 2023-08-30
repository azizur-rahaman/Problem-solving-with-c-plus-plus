#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, counter = 1, maxCount = 1;
    cin >> n;
    int result[n];
 
    for(int i = 0 ; i < n ; i++){
        cin >> result[i];
    }

 
    for(int i = 1 ; i < n ; i++){
        if (result[i] >= result[i-1]){
            counter++;
            if (counter > maxCount) {
                maxCount = counter;
            }
        }else counter = 1;
    }
 
    cout << maxCount;
}