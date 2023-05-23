#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();

    string nameList[n];
    int numberList[n];
    string testCase[n];

    for (int i = 0; i < n; i++)
    {
        cin>>nameList[i];
        cin>>numberList[i];
    }

    for (int i = 0; i <n ; i++)
    {
        cin>>testCase[i];
    }

    for (int i = 0; i < n; i++)
    {
        if(testCase[i]==nameList[i]){
            cout<<nameList[i]<<"="<<numberList[i]<<endl;
        }else{
            cout<<"Not found"<<endl;
        }
    }
        
    return 0;
}