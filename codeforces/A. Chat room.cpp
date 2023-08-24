#include<bits/stdc++.h>
using namespace std;

int main(){
  string str;
  cin>>str;
  string result;
  char test_case[5]={'h','e','l','l','o'};

   int j = 0;

  for (int i = 0; i < 5; i++)
  {
    for ( j; j < str.length(); j++)
    {   
        if(test_case[i] == str[j]){
            result+=test_case[i];
            j=j+1;
            break;
        }
    }
   
  }
    cout<<((result=="hello")? "YES":"NO")<<endl;

}