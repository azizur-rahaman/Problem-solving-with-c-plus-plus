#include<bits/stdc++.h>
using namespace std;


vector < int > sortedArray(vector < int > a, vector < int > b) {
 int i = 0, j = 0; 
 int n = a.size(), m= b.size();
  vector < int > Union; 
  while (i < n && j < m) {
    if (a[i] <= b[j]) 
    {
      if (Union.size() == 0 || Union.back() != a[i])
        Union.push_back(a[i]);
      i++;
    } else 
    {
      if (Union.size() == 0 || Union.back() != b[j])
        Union.push_back(b[j]);
      j++;
    }
  }
  while (i < n) 
  {
    if (Union.back() != a[i])
      Union.push_back(a[i]);
    i++;
  }
  while (j < m) 
  {
    if (Union.back() != b[j])
      Union.push_back(b[j]);
    j++;
  }
  return Union;
}



int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    vector<int> rr = rotateArray(arr,n);

    for(int i =0; i<n; i++)
        cout<<arr[i]<<" ";

    return 0;
}
