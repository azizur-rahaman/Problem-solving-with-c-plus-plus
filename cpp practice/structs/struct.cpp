#include<bits/stdc++.h>
using namespace std;

//Single structure
struct{
int myNum;
string myString;
} myStructure;

//Multiple structure
struct{
    int myName;
    string myString;
}str1,str2,str3;

//Named Structure

struct myNamedStruct {
    int myNum;
    string myString;

};

int main(){
    //Assigning data

    myStructure.myNum = 1;
    myStructure.myString = "Lorem ipsum";
    
    cout<<myStructure.myString;
}