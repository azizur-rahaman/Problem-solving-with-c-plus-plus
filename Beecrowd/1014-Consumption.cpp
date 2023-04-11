/*
Calculate a car's average consumption being provided the total distance traveled (in Km) and the spent fuel total (in liters).
*/

#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    int distanceTravel;
    float fuelSpent;
    cin>>distanceTravel;
    cin>>fuelSpent;
    float totalConsumption = distanceTravel/fuelSpent;

    cout<<fixed<<setprecision(3)<<totalConsumption<<" km/l"<<endl;
}