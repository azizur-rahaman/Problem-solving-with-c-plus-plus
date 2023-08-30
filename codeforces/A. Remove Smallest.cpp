
/**
 *    author        : Saurav Paul 
 *    created       : August 05, 2020 8:36 PM
 *    Problem Name  : A. Remove Smallest
 *    Problem Limit : 1000 ms , 256 MB
 *    Problem Url   : https://codeforces.com/contest/1399/problem/a
 *    @genarated by : ai-virtual-assistant
**/

#include<bits/stdc++.h>
using namespace std;



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int testcase ;
    cin >> testcase ;
    for(int i = 0 ; i < testcase ; i ++){
        
        int n ;
        cin >> n ;
        vector<int> vect(n) ;

        for(auto &x : vect) cin >> x ;
        sort(vect.begin() , vect.end()) ;
        
        bool ok = true ;
        for(int i = 1 ; i < n; i++){
            if(abs(vect[i]-vect[i-1]) > 1){
                ok = false ;
                break ;
            }

        }
        cout << (ok?"YES" : "NO") << endl ;

    }


    return 0 ;
}