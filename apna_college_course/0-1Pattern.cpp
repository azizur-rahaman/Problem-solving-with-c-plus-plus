#include <iostream>
using namespace std;

int main()
{
    
    int n;
    cin>>n;
    
    // 1st algorithm written by me
    int patternNum = 1;
    
    for(int i=1; i<=n; i++){
                
        if(i%2==0){
            patternNum=0;
        }
        for(int j=0; j<i; j++){
            cout<<patternNum;
            if(patternNum==1){
                patternNum=0;
            }else{
                patternNum=1;
            }
        }
        cout<<endl;
        patternNum=1;

    }

    //2nd [algorithm from video]
    
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if((i+j)%2==0){
                cout<<0;
            }else{
                cout<<1;
            }
        }
        cout<<endl;
        
    
    }
    
}
