#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,c,d;
    cin>>n;

    while (true)
    {  
       n++;

       int temp = n;

       a=temp%10;
       temp/=10;
       
       b=temp%10;
       temp/=10;

       c=temp%10;
       temp/=10;
       d= temp;

       if(a!=b && b != c && c != d && d != a && c != a && d != b){
        break;
       }
    }

    cout<<n<<endl;
}