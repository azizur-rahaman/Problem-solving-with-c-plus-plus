#include<iostream>
#include<map>
using namespace std;


int main(){
    int n;
    string name,number,key;
    map<string,string> phone_book;

    cin>>n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
       cin>>name>>number;
       phone_book[name]=number;
    }

    while (cin>>key)
    {
        if(phone_book.find(key) != phone_book.end()){
            cout<<key<<"="<<phone_book.find(key)->second<<endl;
        }else{
            cout<<"Not found"<<endl;
        }
    }
    
    return 0;
    
}
//previous solve without map
//but it has an error [guess what it is!]
// int main(){
//     int n;
//     cin>>n;
//     cin.ignore();

//     string name[n];
//     int phoneNumber[n];
//     string testCase[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin>>name[i];
//         cin>>phoneNumber[i];
//     }

//     for (int i = 0; i <n ; i++)
//     {
//         cin>>testCase[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if(testCase[i]==name[i]){
//             cout<<name[i]<<"="<<phoneNumber[i]<<endl;
//         }else{
//             cout<<"Not found"<<endl;
//         }
//     }
        
//     return 0;
// }