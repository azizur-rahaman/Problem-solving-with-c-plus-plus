#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);


    int test_case;
    cin >> test_case;

   for (int i = 0; i < test_case; i++)
   {
        int n;
        cin >> n;


        if (n <= 4) {
            cout << "NO" << endl;
        } else if (n % 3 == 0) {
            cout << "YES" << endl;
            cout << "1 2 " << n - 3 << endl; 
        } else {
            cout << "YES" << endl;
            cout << "1 1 " << n - 2 << endl; 
        }
   }
   

    return 0;
}
