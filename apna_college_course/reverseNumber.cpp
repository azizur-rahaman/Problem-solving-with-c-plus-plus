#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    string intToStr = to_string(n);

    for (int i = intToStr.length(); i>-1; i--)
    {
        cout<<intToStr[i];
    }
    cout<<endl;

    // method that was in the video
    int reverse;
    while(n>0){
        int lastDigit = n%10;
        reverse=reverse*10+lastDigit;
        n=n/10;
    }
    cout<<reverse;
    
}