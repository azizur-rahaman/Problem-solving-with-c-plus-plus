#include<iostream>
#include<string>
using namespace std;



const int N = 200005;

// void solve(int* cnt) {
// 	string ss;
//     cin>> ss;

//     if(ss[1] == '+') *(cnt)++;
//     else *(cnt)--;

// }

int32_t main()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	// clock_t z = clock();

    solve2();

    // int cnt = 0;

	// int t = 1;
	// cin >> t;
	// while (t--) {
    //     string ss;
    //     cin>> ss;
        
    //     if(ss[1] == '+') cnt++;
    //     else cnt--;

    // }

    // cout<<cnt<<endl;
	// // cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);

	return 0;
}


void solve2(){
    int cnt = 0;

    int t = 1;
    cin >> t;

    while (t--)
    {

        string ss;
        cin>> ss;
            
        

        if(contains(ss, "+")) cnt++;
        else cnt--;
    }
    

    cout<<cnt<<endl;


    
}