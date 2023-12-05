#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {   
        int r,c;
        cin>>r>>c;
        
        if(r>c){
            if(r%2==0) cout<< (pow(r,2) - (c-1))<<endl;
            else cout<< (pow(r-1,2) + 1 + (c-1)) <<endl;
        }else{
            if(c%2==0) cout<< (pow(c-1,2) + 1 + (r-1))<<endl;
            else cout<<( pow(c,2) - (r-1))<<endl;
        }

    }
    
}






//fix above 


// ! Below is Right code

// #include<iostream>
 
// using namespace std;
 
// int main(void)
// {
//   long long t;cin>>t;
 
//   while (t--)
//   {
//     long long x, y;
//     cin >> y >> x;
 
//     long long maxi = max(x,y);
//     long long square = (maxi - 1) * (maxi - 1);
//     if (maxi % 2 == 0)
//     {
//       if (x > y)
//       {
//         cout << square + y << endl;
//       }
//       else
//       {
//         cout << (maxi * maxi) - x + 1 << endl;
//       }
//     }
//     else
//     {
//       if (x > y)
//       {
//         cout << (maxi * maxi) - y + 1 << endl;
//       }
//       else
//       {
//         cout << square + x << endl;
//       }
//     }
//   }
//   return (0);
// }
