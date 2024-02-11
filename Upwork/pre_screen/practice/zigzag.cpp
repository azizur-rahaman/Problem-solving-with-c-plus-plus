#include <bits/stdc++.h>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> result;

    for (int i = 1; i < numbers.size() - 1; i++) {
        if (numbers[i - 1] < numbers[i] && numbers[i] > numbers[i + 1]) {
            result.push_back(1);
        } else if (numbers[i - 1] > numbers[i] && numbers[i] < numbers[i + 1]) {
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }

    for (int i : result)
        cout << i << endl;

    return result;  
}

int main() {
    vector<int> numbers = {1, 2, 1, 3, 4};

    solution(numbers);

    return 0;  
}
