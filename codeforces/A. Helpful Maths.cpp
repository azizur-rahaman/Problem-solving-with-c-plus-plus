#include<bits/stdc++.h>
using namespace std;

vector<int> split(string str, char del){
    vector<int> intVect;

    for (int i = 0; i < (int)str.size(); i++)
    {
        if(str[i]!=del){
        intVect.push_back(str[i]-'0');
        }
    }
    return intVect;
}

int main(){
    string user_input;
    cin>>user_input;
    string result="";
    if(user_input.length()>1){
        vector<int> vectInt = split(user_input,'+');

    for (int i = 0; i < vectInt.size(); i++)
    {
        for (int j = i+1; j < vectInt.size(); j++)
        {
            if(vectInt[i]>vectInt[j]){

                int temp = vectInt[i];
                vectInt[i]=vectInt[j];
                vectInt[j]=temp;

            }
        }
        
    }
    
    for (int i = 0; i < vectInt.size(); i++)
    {
       result+=to_string(vectInt[i]);
       if(i<(vectInt.size()-1)){
        result+="+";
       }
    }
    cout<<result<<endl;

    }else{
        cout<<user_input<<endl;
    }
    

    
}