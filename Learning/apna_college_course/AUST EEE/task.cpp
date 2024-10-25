#include<bits/stdc++.h>
using namespace std;

class Student
{

private:
    string name;
    int roolNumber, age, gender;
    double array[];

    struct DateOfBirth{
        int day,month,year;
    };

    void inputAndDisplayData(){
        cout<<"Enter all the information:"<<endl;

        cout<<"Your Name: ";
        cin>>name;
        
        cout<<"Your Rool: ";
        cin>>roolNumber;

        cout<<"Your age: ";
        cin>>age;

        cout<<"Gender: ";
        cin>>gender;

    cout<<name<<endl<<roolNumber<<endl<<age<<endl<<gender<<endl;

    };
};

class Member : private Student{



};

int main(){

}