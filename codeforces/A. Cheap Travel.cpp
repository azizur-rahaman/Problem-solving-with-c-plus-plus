#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

	
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	int result=0;
 
    if(m*a<=b){
        
    result=n*a;
        
    }	
    
    else
    {   
        int x = (n%m)*a;
        result=(n/m)*b+min(x,b);
        
    }
    
    cout<<result;

}