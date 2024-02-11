#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define c cout<<
#define e <<endl



int main(){
    ll t;
    cin>> t;

    while (t--)
    {
        ll n;
        cin>> n;
        int l = 20;


        vector<int> sett;
        map<int,int> mapp;


        for (int i = 0; i < n; i++)
        {   
            ll temp;
            cin>>temp;

            sett.push_back(temp);
            mapp[temp] = i;

        }



        sort(sett.begin(), sett.end());
        sett.erase( unique(sett.begin(), sett.end()), sett.end());
        

       bool flag = false;
       ll sum1 = 0, sum2 = 0, count = 1;

       if(sett.size() >= 4){

            map<int,int> result;

            result[mapp[sett[0]]] = sett[0];
            result[mapp[sett[1]]] = sett[1];
            result[mapp[sett[2]]] = sett[2];
            result[mapp[sett[3]]] = sett[3];

            for (pair<int,int> p : result)
            {
                if(count <= 2) sum1 += p.second, count++;
                else sum2 += p.second, count++;
            }

            if(sum1 != sum2) flag = true;
            
       }

       if(flag) c "YES" e;
       else c "NO" e;
       
    }
        
}