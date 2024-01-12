#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){

    if(n <= 1) return n;
    int result = fibonacci(n-1) + fibonacci(n-2);
    return result;
}

int main(){
    int n;
    cin>>n;


    for (int i = 1; i < n; i++)
    {
        cout<<fibonacci(i)<<" ";
    }
    

}