#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();

    string stringArray[t]={"",""};

    for (int i = 0; i < t; i++)
    {
       getline(cin, stringArray[i]);
    }
    
    for (int i = 0; i < t; i++)
    {
        string evenString="";
        string oddString="";

        for (int j = 0; j < stringArray[i].length(); j++)
        {
            if(j==0 || j%2==0){
                evenString+=stringArray[i][j];
            }else{
                oddString+=stringArray[i][j];
            }
        }
        cout<<evenString<<" "<<oddString<<endl;
    }
    


}