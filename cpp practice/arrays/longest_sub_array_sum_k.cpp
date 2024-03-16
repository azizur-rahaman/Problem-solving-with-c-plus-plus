#include<bits/stdc++.h>
using namespace std;



// Buffer Approach
int longestSubarrayWithSumK(vector<int> a, long long k) {

       int n = a.size();

    map<long long, int> preMap;
    long long preSum = 0, maxLength = 0;


    for (int i = 0; i < n; i++)
    {
       preSum += a[i];

       if(preSum == k) {
           long long len = i + 1;
            maxLength = max(maxLength,len);
       }

       int rem = preSum - k;

       if(preMap.find(rem) != preMap.end()){
            long long len = i - preMap[rem];
            maxLength = max(maxLength, len);
       }

       if(preMap.find(preSum) == preMap.end()){
        preMap[preSum] = i;
       }
    }
    

    return maxLength;
}



//? BruteForce Approach


//! First
// int longestSubarrayWithSumK(vector<int> a, long long k) {
    
//     int n = a.size();

//     vector<vector<int>> vt;

//     for(int i=0; i<n; i++){
//         for(int j=i; j<n; j++){

//             vector<int> svt;

//             for(int k=i; k <= j; k++){
//                 svt.push_back(a[k]);
//             }

//             vt.push_back(svt);
//         }
//     }

//     int subLength = 0;
//     for (vector<int> v : vt)
//     {   
//         unsigned long long int sum = 0;

//         for (int i : v)
//         {
//             sum += i;
//         }
//         int sz = v.size();
//         if(sum == k) subLength = max(subLength, sz);
        
//     }

//     return subLength;
    

// }

//! Optimize BruteForce

// int longestSubarrayWithSumK(vector<int> a, long long k) {
    
//     int n = a.size();

//     vector<vector<int>> vt;
//     int subLength = 0;

//     for(int i=0; i<n; i++){
        
//         unsigned long long int sum = 0;
//         for(int j=i; j<n; j++){
            
//             sum += a[j];
//             if(sum == k) subLength = max(subLength,(j-i + 1));
//         }

//     }
//     cout<<subLength<<endl;

//     return subLength;
// }


int main() {
    long long n,k;
    cin >>n>>k;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    int len = longestSubarrayWithSumK(arr,k);

    cout<<len<<endl;

    

    return 0;
}
