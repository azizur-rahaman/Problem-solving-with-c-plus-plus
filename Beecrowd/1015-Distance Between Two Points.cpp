/*
Read the four values corresponding to the x and y axes of two points in the plane, p1 (x1, y1) and p2 (x2, y2) and calculate the distance between them, showing four decimal places after the comma, according to the formula:
*/

#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    float x1,x2,y1,y2;
    cin>>x1>>y1>>x2>>y2;
    float distance = sqrt(pow((x2-x1),2)+ pow((y2-y1),2));
    cout<<fixed<<setprecision(4)<<distance<<endl;
}