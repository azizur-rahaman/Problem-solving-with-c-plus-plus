#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float a,b,c;
    cin>>a>>b>>c;

    // first of verify it will Triangle inequality theorem
    if(((a+b)>c)&&((b+c)>a)&&((a+c)>b)){
        
        //it's possible to make triangle with this three value
        cout<<fixed<<setprecision(1)<<"Perimetro = "<<(a+b+c)<<endl;
    }else {
        cout<<fixed<<setprecision(1)<<"Area = "<< (0.5*(a+b)*c)<<endl;
    }
}