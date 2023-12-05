#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore(); // To ignore the newline character after reading t

    while (t--) {
        string temp;
        getline(cin, temp);
        int counter = 0; // Initialize counter for each test case

        for(int i = 0; i < temp.length(); i++) {
            if(temp[i] != '-') {
                if((i == 0 || temp[i - 1] != '^') && (i == temp.length() - 1 || (temp[i + 1] != '^' && temp[i + 1] != '_'))) {
                    counter++;
                }
            } else {
                if((i == 0 || temp[i - 1] != '^') && (i == temp.length() - 1 || temp[i + 1] != '^')) {
                    counter += 2;
                }
            }
        }
        cout << counter << endl;
    }
    return 0;
}
