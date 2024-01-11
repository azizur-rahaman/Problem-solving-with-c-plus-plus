//? Find out k consequtive minimum sum from an array


#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[8] = {-2,10,1,3,2,-1,4,5};
    int k=3;

    int minn = INT_MAX, sum=0;

    // first of all take consequtive first k sum
    for (int i = 0; i < k; i++)
    {
        sum+=arr[i];
    }

    minn = min(minn,sum);
    
    // for every i from i=1 to i < arr.length() - k + 1;
    // compare previous sum and new_sum = p_sum - previus i arr value + current i arr value
    // it means you get next k consequtive sum from array

    for (int i = 1; i < 6; i++)
    {
    
            int temp = sum-arr[i-1]+arr[i+k-1];
            sum=temp;
            minn = min(minn, temp);
        
    }

    cout<<minn<<endl;
    
}