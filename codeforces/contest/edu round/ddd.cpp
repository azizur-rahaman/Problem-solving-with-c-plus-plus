#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    vector<string> vect;

    while (t--)
    {
        while (cin)
        {   
           string temp;
           cin>>temp;

           vect.push_back(temp);
        }
        
    }
    
   for (int i = 0; i < vect.size(); i++)
   {
    cout<<vect.at(i)<<" "<<endl;
   }
   

    return 0;
}
