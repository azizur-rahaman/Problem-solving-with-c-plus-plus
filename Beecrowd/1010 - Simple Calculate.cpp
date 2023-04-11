/*
In this problem, the task is to read a code of a product 1, the number of units of product 1, the price for one unit of product 1, the code of a product 2, the number of units of product 2 and the price for one unit of product 2. After this, calculate and show the amount to be paid.
*/


#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int pcode1,punit1;
    int pcode2,punit2;
    float pprice1,pprice2;

    cin>>pcode1>>punit1>>pprice1;
    cin>>pcode2>>punit2>>pprice2;

    float tobepaid = (punit1*pprice1)+(punit2*pprice2);
    cout<< fixed<<setprecision(2)<<"VALOR A PAGAR: R$ "<<tobepaid<<endl;
}