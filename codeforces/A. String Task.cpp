#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;

    string result = ".";
    string vowel= "aoyeui";

    for (int i = 0; i < str.length(); i++)
    {   
        //convert uppercase to lowercase
        if(isupper(str[i])){
            str[i]=tolower(str[i]);
        }

        if((vowel.find(str[i]) != string::npos)){
            if(i>0){
                if(result[result.length()-1] != '.'){
                result+='.';
            }
            }
 
        }else{
            if(result[result.length()-1] != '.'){
                result+='.';
            }
            result+=str[i];
        }
    }

    if(result[result.length()-1]=='.'){
        result.erase(result.length()-1,1);
    }
    cout<<result<<endl;
}