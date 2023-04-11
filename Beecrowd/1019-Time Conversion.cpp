/*
Read an integer value, which is the duration in seconds of a certain event in a factory, and inform it expressed in hours:minutes:seconds.
*/

#include<iostream>
using namespace std;

int main(){
    int durationInSeconds;
    cin>>durationInSeconds;
    
    int hours= durationInSeconds/3600; // 1 hour= 3600 seconds;
    durationInSeconds=durationInSeconds%3600;
    int minutes = durationInSeconds/60; // 1 minute = 60 seconds
    int seconds = durationInSeconds%60;
    cout<<hours<<":"<<minutes<<":"<<seconds<<endl;

}