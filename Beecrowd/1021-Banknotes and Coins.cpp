//not completed!!!!!!!!!!!!!!!!!!


/*
Read a value of floating point with two decimal places. This represents a monetary value. After this,
calculate the smallest possible number of notes and coins on which the value can be decomposed.
The considered notes are of 100, 50, 20, 10, 5, 2. 
The possible coins are of 1, 0.50, 0.25, 0.10, 0.05 and 0.01. 
Print the message “NOTAS:” followed by the list of notes and the message “MOEDAS:” followed by the list of coins.
*/



#include<iostream>
using namespace std;

int main(){
    int value;
    cin>>value;
    
    cout<<value<<endl;
    cout<<"NOTAS:"<<endl;
    cout<<value/100<<" nota(s) de R$ 100.00"<<endl;
    value = value%100;
    cout<<value/50<<" nota(s) de R$ 50.00"<<endl;
    value = value%50;
    cout<<value/20<<" nota(s) de R$ 20.00"<<endl;
    value = value%20;
    cout<<value/10<<" nota(s) de R$ 10.00"<<endl;
    value = value%10;
    cout<<value/5<<" nota(s) de R$ 5.00"<<endl;
    value = value%5;
    cout<<value/2<<" nota(s) de R$ 2.00"<<endl;
    value = value%2;
    cout<<"MOEDAS:"<<endl;
    cout<<value/1<<" nota(s) de R$ 1.00"<<endl;
    float value = value;
    cout<<value/0.50<<" nota(s) de R$ 0.50"<<endl;
    float value = (value*100)%5;
    cout<<value/50<<" nota(s) de R$ 0.20"<<endl;
    value = value%50;
    cout<<value/20<<" nota(s) de R$ 20,00"<<endl;
    value = value%20;
    cout<<value/10<<" nota(s) de R$ 10,00"<<endl;
    value = value%10;
    cout<<value/5<<" nota(s) de R$ 5,00"<<endl;
    value = value%5;
    cout<<value/2<<" nota(s) de R$ 2,00"<<endl;
}



0 moeda(s) de R$ 0.25
2 moeda(s) de R$ 0.10
0 moeda(s) de R$ 0.05
3 moeda(s) de R$ 0.01