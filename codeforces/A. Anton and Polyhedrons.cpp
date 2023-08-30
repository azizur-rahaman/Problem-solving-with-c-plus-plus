#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, counter=0;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;

        if(str=="Tetrahedron"){
            counter+=4;
        }else if(str=="Cube"){
             counter+=6;
        }else if(str=="Octahedron"){
             counter+=8;
        }else if(str=="Dodecahedron"){
             counter+=12;
        }else if(str=="Icosahedron"){
            counter+=20;
        }
    }

    cout<<counter<<flush;
    
}
