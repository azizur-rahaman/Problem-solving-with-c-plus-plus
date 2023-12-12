// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;

//     string str(n,'0');
//     string str1s(n,'1');


//     cout<<str<<endl;

//     while (str!=str1s)
//     {
//         for (int i = n-1; i >= 0; i--) {
//             if((str[i]=='0' && i==0) || str[i-1]=='1'){ 
//                 str[i]='1'; 
//                 cout<<str<<endl;
//                 break;
//             }else {
//                 string temp=str;
//                 temp[i]='1';
//                 cout<<temp<<endl;
//             }
            
//         }

//     }



    
// }




#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    vector<string> gray_code;
    gray_code.push_back("");
    for (int i = 0; i < n; i++) {
        int size = gray_code.size();
        for (int j = size - 1; j >= 0; j--) {
            gray_code.push_back(gray_code[j]);
        }
        size *= 2;
        for (int j = 0; j < size; j++) {
            if (j < gray_code.size() / 2) {
                gray_code[j] += "0";
            } else {
                gray_code[j] += "1";
            }
        }
    }
    for (int i = 0; i < gray_code.size(); i++) {
        cout << gray_code[i] << endl;
    }
}