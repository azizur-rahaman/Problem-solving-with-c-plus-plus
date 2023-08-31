#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,k, can_participate=0, temp=0, counter=0;
    cin>>n>>k;

    while (n--)
    {
        cin>>temp;
        if(temp+k<=5) {
            ++counter;
            if(counter==3){
                can_participate++;
                counter=0;
            }

        }
    }
    
    cout<<can_participate<<endl;
    
    return 0;
}