/*
Read 4 integer values A, B, C and D. Then if B is greater than C and D is greater than A and if the sum of C and D is greater than the sum of A and B and if C and D were positives values and if A is even, write the message “Valores aceitos” (Accepted values). Otherwise, write the message “Valores nao aceitos” (Values not accepted).
*/

#include<iostream>
using namespace std;

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int isEven = a%2;
     if(b>c && d>a && (c+d)> (a+b) && c>=0 && d>=0 && isEven==0){
         cout<<"Valores aceitos"<<endl;
     }else{
         cout<<"Valores nao aceitos"<<endl;
     }
}
