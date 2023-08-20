#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    string wordsList[n];

    //getting user input
    for (int i = 0; i < n; i++)
    {
        cin>>wordsList[i];
    }
    
    for (int i = 0; i < n; i++)
    {   int lenghtOfWords = wordsList[i].length();
        if(lenghtOfWords>10){
            cout<<wordsList[i][0]+ to_string(lenghtOfWords-2)+wordsList[i][lenghtOfWords-1]<<endl;
        }else{
            cout<<wordsList[i]<<endl;
        }
    }
    

    
}