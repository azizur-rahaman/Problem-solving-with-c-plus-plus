/*
Using the following table, write a program that reads a code and the amount of an item. After, print the value to pay. 
This is a very simple program with the only intention of practice of selection commands.
*/



#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    double x1=4.00,x2=4.50,x3=5.00,x4=2.00,x5=1.50,ans=0;

    cin>>x>>y;
    if(x==1){
        ans=x1*y;
    }else if(x==2){
        ans=x2*y;
    }else if(x==3){
        ans=x3*y;
    }else if(x==4){
        ans=x4*y;
    }else if(x==5){
        ans=x5*y;
    }
    cout<<fixed;
    cout<<setprecision(2)<<"Total: R$ "<<ans<<endl;

return 0;
    
}

// solution tw - m
// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main(){
//     int code,price;
//     cin>>code>>price;

//     switch (code)
//     {
//     case 1:
//         cout<<fixed<<setprecision(2)<<"Total: R$ "<<price*4.00<<endl;
//         break;
//     case 2:
//         cout<<fixed<<setprecision(2)<<"Total: R$ "<<price*4.50<<endl;
//         break;
//     case 3:
//         cout<<fixed<<setprecision(2)<<"Total: R$ "<<price*5.00<<endl;
//         break;
//     case 4:
//         cout<<fixed<<setprecision(2)<<"Total: R$ "<<price*2.00<<endl;
//         break;
//     case 5:
//         cout<<fixed<<setprecision(2)<<"Total: R$ "<<price*1.00<<endl;
//         break;
//     }
// }