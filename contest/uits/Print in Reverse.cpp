#include<bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        stack<int> st;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            st.push(x);
        }
        for(int i=0; i<n; i++){
            cout<<st.top()<<endl;
            st.pop();
        }

    }
    return 0;
}