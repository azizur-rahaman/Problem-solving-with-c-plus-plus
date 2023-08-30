#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);


    int n, best, worst, result = 0; 
    cin >> n;
    int array[n];
    for(int i = 0; i<n; i++)
    {
      cin >> array[i];
      if(i==0){
        best=array[0];
        worst=best;
      }
    }

    for(int i = 1; i<n; i++)
    {
      if(best < array[i]) {
        best = array[i];
        result++;
      }
      else if(worst > array[i])
      {
        worst = array[i];
        result++;
      }
      
    }
    cout << result << endl;

}
