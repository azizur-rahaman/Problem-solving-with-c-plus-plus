#include <iostream>
using namespace std;

int main()
{

    //not compelted
    int n;
    cin>>n;
    
    int patternNum = 1;
    
    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<patternNum;
            if(patternNum==1){
                patternNum=0;
            }else{
                patternNum=1;
            }
        }
        cout<<endl;
    }
}
