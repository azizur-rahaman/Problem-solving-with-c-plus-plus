#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    long long n, x=4;
    cin>>n;
    
    int temp1=n-x,temp2;
    while (temp1>0)
    {
       while (true)
       {
        if(temp1%2==0 && temp1 !=2){
            cout<<x<<" "<<temp1<<endl;
            temp1=0;
            break;
        }else if(temp1%3 == 0 && temp1 != 3){
            cout<<x<<" "<<temp1<<endl;
            temp1=0;
            break;
        }else if(temp1%4 == 0 && temp1 != 4){
            cout<<x<<" "<<temp1<<endl;
            temp1=0;
            break;
        }else if(temp1%5 == 0 && temp1 != 5){
            cout<<x<<" "<<temp1<<endl;
            temp1=0;
            break;
        }else if(temp1%6 == 0 && temp1 != 6){
            cout<<x<<" "<<temp1<<endl;
            temp1=0;
            break;
        }else if(temp1%7 == 0 && temp1 != 7){
            cout<<x<<" "<<temp1<<endl;
            temp1=0;
            break;
        }else if(temp1%8 == 0 && temp1 != 8){
            cout<<x<<" "<<temp1<<endl;
            temp1=0;
            break;
        }else if(temp1%9 == 0 && temp1 != 9){
            cout<<x<<" "<<temp1<<endl;
            temp1=0;
            break;
        }

        temp1-=2;
        x+=2;
       }
       
    }
    
    
    return 0;
}