#include <bits/stdc++.h>
using namespace std;




int main() {

    int t, result;
    cin >> t;

    int col = t;

    for (int i=0; i<t; i++) {
        
        char a,b,c;
        bool isQuestionMarkFound=false;

        for (int j=0; j<3; j++) 
        {
            cin>>a>>b>>c;

            if(isQuestionMarkFound==false){

                
                if(a == '?' || b == '?' || c == '?'){
                    isQuestionMarkFound=true;
                  
                    int sum = a+b+c;

                    if(sum==194) cout<<"C"<<endl;
                    else if(sum==195) cout<<"B"<<endl;
                    else cout<<"A"<<endl;

                }

            }


        }

    }

    return 0;
}

