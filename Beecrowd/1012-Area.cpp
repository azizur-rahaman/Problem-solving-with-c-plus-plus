/*
Make a program that reads three floating point values: A, B and C. Then, calculate and show:
a) the area of the rectangled triangle that has base A and height C.
b) the area of the radius's circle C. (pi = 3.14159)
c) the area of the trapezium which has A and B by base, and C by height.
d) the area of ​​the square that has side B.
e) the area of the rectangle that has sides A and B.
*/


#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    float a,b,c;
    cin>>a>>b>>c;

    float aRectangleTriangle = (a*c)/2;
    float aCircle = 3.14159 * c*c;
    float aTrapiziuam = ((a+b)/2)*c;
    float aSquare = b*b;
    float aRectangle = a*b;

    cout<<fixed<<setprecision(3)<<"TRIANGULO: "<<aRectangleTriangle<<endl;
    cout<<fixed<<setprecision(3)<<"CIRCULO: "<<aCircle<<endl;
    cout<<fixed<<setprecision(3)<<"TRAPEZIO: "<<aTrapiziuam<<endl;
    cout<<fixed<<setprecision(3)<<"QUADRADO: "<<aSquare<<endl;
    cout<<fixed<<setprecision(3)<<"RETANGULO: "<<aRectangle<<endl;
}