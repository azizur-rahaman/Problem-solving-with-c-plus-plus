#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        string str, str2 = "";
        cin >> str;
        str2 = str[0];
        int i;
        for (i = 1; i < str.length() && str[i] == '0'; i++)
        {
            str2 += str[i];
        }
        if (i == str.length())
        {
            cout << -1 << endl;
        }
        else
        {
            int x = stoi(str2);
            int y = stoi(str.substr(i, str.length()));
            if (x >= y)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << x << " " << y << endl;
            }
        }
    }
}
