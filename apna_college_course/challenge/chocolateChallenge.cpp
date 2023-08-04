#include<bits/stdc++.h>
using namespace std;

int main(){
    int rupee, c_price,qof_wr_for_one_chololate;
    cin>>rupee>>c_price>>qof_wr_for_one_chololate;

    int t_c_by_rupee = (rupee/c_price);
    int t_c_by_wrapper = 0;
    int remainWrapper = t_c_by_rupee;

    while (remainWrapper>2){
        int temp = remainWrapper/qof_wr_for_one_chololate;
        t_c_by_wrapper += temp;
        remainWrapper = (remainWrapper%qof_wr_for_one_chololate) + temp;

    }
  
    
    

}