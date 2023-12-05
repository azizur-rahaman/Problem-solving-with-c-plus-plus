// #include<bits/stdc++.h>
// #include<algorithm>
// using namespace std;

// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<string> ss(n);

//     for (int i = 0; i < n; ++i) {
//         cin >> ss[i];
//     }

//     bool isValid = true;
//     for (int i = 0; i < n; ++i) {
        
//         for (int j = 0; j < ss[i].length(); j++)
//         {
//             if(ss[i][0] != ss[i][j]) {
                
//                 if(i != 0){
//                     if((ss[i-1][0] == ss[i][0])) isValid = false;
//                 }else isValid = false;

                
                
//                 }
//         }
        
     
//     }

//     cout << (isValid ? "YES" : "NO") << endl;

//     return 0;
// }





#include<bits/stdc++.h>
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    bool flag=true;

    vector<string> ss(n);
    for (int i = 0; i < n; ++i) {
        cin >> ss[i];
    }

        for (int i = 0; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            if (ss[i][j] != ss[i][0]) {
                flag=false;
            }
        }

        if (i > 0 && ss[i][0] == ss[i - 1][0]) {
            flag = false;
        }
    }


    if (flag==true ) cout << "YES"<<endl; else cout<< "NO" << endl;
    return 0;
}
