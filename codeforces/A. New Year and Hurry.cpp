#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int number_of_problems,distance_time;
    cin>>number_of_problems>>distance_time;



    while (number_of_problems>0)
    {   
        double temp= (double) number_of_problems/2 * (double) ((2*5)+((number_of_problems-1)*5));
        if((int)temp+distance_time<=240){
            cout<<number_of_problems<<endl;
            break;
        }
        number_of_problems--;
    }
    if(number_of_problems==0){
        cout<<number_of_problems<<endl;
    }   
}