#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,numberOfGroups=0;
    string previousMagnets="";
    cin>>n;
    cin.ignore();

    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        if(str!= previousMagnets){
            numberOfGroups++;
            previousMagnets=str;
        }
    }
    cout<<numberOfGroups<<endl;
    
}