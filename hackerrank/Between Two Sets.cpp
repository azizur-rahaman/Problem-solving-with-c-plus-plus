#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr_1_len, arr_2_len; // size of two array
    cin>>arr_1_len>>arr_2_len;

    int arr_1[arr_1_len], arr_2[arr_2_len]; //declaring two array

    //getting input for arr_1
    for (int i = 0; i < arr_1_len; i++)
    {
        cin>>arr_1[i];
    }

    //getting input for arr_2
    for (int i = 0; i < arr_2_len; i++)
    {
        cin>>arr_2[i];
    }

    sort(arr_2, arr_2+arr_2_len);

    // vector<int> vect1;
    // vector<int> vect2;
    vector<vector<int>> vect;


    for (int i = 0; i < arr_1_len; i++)
    {    
        int temp=0;
        while (temp<= arr_2[arr_2_len-1])
        {
            temp+=arr_1[i];
            vect[i].emplace_back(temp);
        }
    }

    vector<int> common;
    // cout<<"1size: "<<vect1.size()<<" 2size: "<<vect2.size()<<endl;
    for (int i = 0; i < vect[0].size(); i++)
    {
        for (int k = 0; k < vect[0].size(); k++)
        {   
            if(vect2[i]==vect1[k]) {
                common.emplace_back(vect2[i]);
                // cout<<"c: "<<vect2[i]<<endl;
            }
        }
        
    }

    int counter=0;
    for (int i = 0; i <common.size() ; i++)
    {   
        bool isTrue=true;
        for (int k = 0; k < arr_2_len; k++)
        {
            if(arr_2[k]%common[i]!=0) {
                isTrue=false;
                break;
            }; 
        }

        if(isTrue) counter++;
        
    }
        
    cout<<counter<<endl;
    
}

