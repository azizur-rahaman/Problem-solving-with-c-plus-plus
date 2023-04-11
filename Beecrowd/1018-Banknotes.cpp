/*
In this problem you have to read an integer value and calculate the smallest possible number of banknotes in which the value may be decomposed. 
The possible banknotes are 100, 50, 20, 10, 5, 2 e 1. Print the read value and the list of banknotes.
*/

#include<iostream>
using namespace std;

int main(){
    int value;
    cin>>value;
    
    cout<<value<<endl;

    cout<<value/100<<" nota(s) de R$ 100,00"<<endl;
    value = value%100;
    cout<<value/50<<" nota(s) de R$ 50,00"<<endl;
    value = value%50;
    cout<<value/20<<" nota(s) de R$ 20,00"<<endl;
    value = value%20;
    cout<<value/10<<" nota(s) de R$ 10,00"<<endl;
    value = value%10;
    cout<<value/5<<" nota(s) de R$ 5,00"<<endl;
    value = value%5;
    cout<<value/2<<" nota(s) de R$ 2,00"<<endl;
    value = value%2;
    cout<<value/1<<" nota(s) de R$ 1,00"<<endl;
}