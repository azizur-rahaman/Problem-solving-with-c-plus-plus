#include<bits/stdc++.h>

using namespace std;

int countTriangles(const vector<int>& sticks) {
   int n = sticks.size();
   int count = 0;

   sort(sticks.begin(), sticks.end());

   for (int i = 0; i < n - 2; i++) {
       int k = i + 2;
       for (int j = i + 1; j < n - 1; j++) {
           while (k < n && sticks[i] + sticks[j] > sticks[k]) {
               k++;
           }
           count += k - j - 1;
       }
   }

   return count;
}

int main() {
   int t;
   cin >> t;

   while (t--) {
       int n;
       cin >> n;

       vector<int> sticks(n);
       for (int i = 0; i < n; i++) {
           cin >> sticks[i];
       }

       int answer = countTriangles(sticks);
       cout << answer << endl;
   }

   return 0;
}
