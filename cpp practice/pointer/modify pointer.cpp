#include<bits/stdc++.h>
using namespace std;

int main(){
    string food = "Pizza";
    string* ptr = &food;

    //! Output the value of food
    cout<<food<<endl;

    //! Output the address of food
    cout<<&food<<endl;

    //! Access the memory address of food and output it's value
    cout<<*ptr<<endl;

    //! Change the value of pointer
    *ptr = "Hamburger";

    //! Output the new value of the pointer
    cout<<*ptr<<endl;
    
}