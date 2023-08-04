#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// my solution
// int binaryToDecimal(int n){
//     int decimal=0;
//     int len = to_string(n).length();
//     for (int i = 0; i<len; i++)
//     {
//         decimal += (n%10)*pow(2,i);
//         n=n/10;
//         cout<<"Decimal: "<<decimal<<endl<<"N: "<<n<<endl;
//     }

//     return decimal;
    
// }


void binaryToDecimal(int n){
    int ans=0;
    int x=1;
    
    while(n>0){
        int y= n%10;
        ans += x*y;
        x*=2;
        n=n/10;
    }
    cout<<"Binary "<<n<<"in Decimal is: "<<ans<<endl;
}


void octalToDecimal(int n){
    int ans=0;
    int x=1;

    while (n>0)
    {
        int y= n%10;
        ans+=x*y;
        x*=8;
        n=n/10;
    }

        cout<<"Octal "<<n<<"in Decimal is: "<<ans<<endl;
    
}

void hexadecimalToDecimal(string n){
    int ans=0;
    int x=1;
    int s = n.size();

    for (int i = s-1; i >=0; i--)
    {
        if(n[i]>='0' && n[i]<='9'){
            ans+=x*(n[i]-'0');
            x*=16;
        }else if(n[i]>='A' && n[i]<= 'F'){
            ans+=x*(n[i]-'A'+10);
            x*=16;
        }
    }
    
        cout<<"Hexadecimal "<<n<<"in Decimal is: "<<ans<<endl;
    
}

// decimal to....
void decimalToBinary(int n){
int x=1;
int ans=0;

while (x<=n)
{
    x*=2;
    x/=2;

    while (x>0)
    {
        int lastDigit = n/x;
        n-=lastDigit*x;
        x/=2;
        ans=ans*10+lastDigit;
    }
    return ans;
    
}

    
    
}
int main(){
    int n;

    // cout<<"Pleas choose your options:"<<endl;
    // cout<<"1. Binary To Decimal"<<endl;
    // cout<<"2. Octal To Decimal"<<endl;
    // cout<<"3. Hexadecimal To Decimal"<<endl;

    // cin>>n;

    // switch (n)
    // {
    // case 1:
    //     int binaryNum;
    //     cin>>binaryNum;
    //     binaryToDecimal(binaryNum);
    //     break;
    
    // default:
    //     break;
    // }

    cin>>n;

    decimalToBinary(n);
}