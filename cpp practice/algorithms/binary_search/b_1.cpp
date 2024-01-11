#include<bits/stdc++.h>
using namespace std;

int binaryRecursiveWay(vector<int> &nums, int low, int high, int target){
    if(low > high) return -1;

    int mid = (low + high) / 2;
    cout<<mid<<endl;
    if(nums[mid] == target) return mid;
    else if(target > nums[mid]) return binaryRecursiveWay(nums, mid+1, high, target);
    else return binaryRecursiveWay(nums, low, high-1, target);

}

int main(){
    vector<int> arr = {1,2,3,4,7};
    
    int index = binaryRecursiveWay(arr, 0, 4, -5);

    cout<<index<<endl;

    
}