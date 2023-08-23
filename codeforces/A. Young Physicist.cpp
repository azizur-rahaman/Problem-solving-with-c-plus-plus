#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    
    int arr[n][3];
    int x=0,y=0,z=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {  
            cin>>arr[i][j];
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            switch (j)
            {
            case 0:
                x+=arr[i][j];
                break;
            case 1:
                y+=arr[i][j];
                break;
            case 2:
                z+=arr[i][j];
                break;
            }
        }
        
    }

    if(x==0 && y==0 && z==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

}

//2nd solution

// for (int i = 0; i < n; i++)
// {
//     cin>>x>>y>>z;
//     x_sum+=x;
//     y_sum+=y;
//     z_sum+=z;
// }
