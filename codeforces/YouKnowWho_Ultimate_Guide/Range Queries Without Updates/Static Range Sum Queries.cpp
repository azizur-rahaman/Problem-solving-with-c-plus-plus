// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;

int main() {
    
    long long int n,q;
    cin>>n>>q;

    vector<long long int> vect(n);

    for(int i=0; i< n; i++){
        int temp;
        cin>>temp;

        if(i != 0){
            vect[i] = vect[i-1] + temp;
        }else vect[i] = temp;
        
    }

    for(int i=0; i< q; i++){
        int a,b;
        cin>>a>>b;

        if(a>=2)
            cout<<(vect[b-1]-vect[a-2])<<endl;
        else cout<<(vect[b-1])<<endl;
        
    }


    

    return 0;
}