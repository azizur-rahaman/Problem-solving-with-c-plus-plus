#include<bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int largest = INT_MIN, second_largest = INT_MIN, smallest = INT_MAX, second_smallest = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(a[i] > largest) {
            second_largest = largest;
            largest = a[i];
        } else if(a[i] > second_largest && a[i] != largest) {
            second_largest = a[i];
        }

        if(a[i] < smallest) {
            second_smallest = smallest;
            smallest = a[i];
        } else if(a[i] < second_smallest && a[i] != smallest) {
            second_smallest = a[i];
        }
    }

    if (second_largest == INT_MIN || second_smallest == INT_MAX)
        return {};

    return {second_largest, second_smallest};
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    
    vector<int> r = getSecondOrderElements(n, arr);

  
    cout << r[0] << " " << r[1] << endl;
    return 0;
}
