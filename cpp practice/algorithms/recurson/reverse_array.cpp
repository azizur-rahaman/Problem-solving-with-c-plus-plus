#include<bits/stdc++.h>
using namespace std;

void reverse_array(int arr[], int i, int j){
    if(i >= j) return;

    // int temp = arr[i];
    // arr[i] = arr[j];
    // arr[j] = temp;

    swap(arr[i],arr[j]);

    reverse_array(arr, i+1, j-1);
}

int main(){
    int n;

    int arr[6] = {1,2,3,4,5,7};

    reverse_array(arr, 0, 5);

    for (int i : arr) {
        cout << i << endl;
    }
}
