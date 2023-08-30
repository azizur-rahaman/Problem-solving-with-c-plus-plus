#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);


    long long house,task, lastnum=1,result=0;
    cin>>house>>task;

    for (int i = 0; i < task; i++)
    {
        long long temp;
        cin>>temp;
        if(lastnum==1){
            lastnum=temp;
            result+=--temp;
        }else{
            if(lastnum>temp){
                result+=(house-lastnum)+temp;
                lastnum=temp;
            }else{
                result+=temp-lastnum;
                lastnum=temp;
            }
        }
    }

    cout<<result<<endl;
    

}