#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin>>t;
    
    while (t--)
    {   
        string str;
        int temp1=13,temp2=37,plus=0,minus=0;
        vector<int> result;
        bool isSorted=false;
        getline(cin,str);

        for (int i = 0; i < str.length(); i++)


        {

            if(str[i]='+'){
                if(result[result.size()-1] == 13 ||37){
                                    if(result[result.size()-1]==temp1) result.push_back(temp2);
                else result.push_back(temp1);
                }


                cout<<"i'th: "<<str[i]<<" arr "<<result[0]<<endl;
            }else if(str[i]='-'){
                result.pop_back();
                cout<<"i'th: "<<str[i]<<" arr "<<result[result.size()-1]<<endl;
            }else if(str[i]='1'){
                sort(result.begin(), result.end());
                cout<<"i'th: "<<str[i]<<" arr "<<result[result.size()-1]<<endl;
            }else if(str[i]='0'){
                sort(result.rbegin(), result.rend());
            }
        }
        
        if(result.size()>=2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    

    
}