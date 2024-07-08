#include <iostream>
#include <vector>
using namespace std;

vector<int> prefixes(int t, vector<pair<int, vector<int> > > &elements) {
    vector<int> results;

    for (int caseIndex = 0; caseIndex < t; ++caseIndex) {
        int n = elements[caseIndex].first;
        vector<int> &a = elements[caseIndex].second;
        
        long long sum = 0;
        long long maxie = 0;
        int cnt = 0;

        for (int i = 0; i < n; ++i) {
            sum += a[i];
            if (a[i] > maxie) {
                maxie = a[i];
            }

            if (sum == 2 * maxie) {
                ++cnt;
            }
        }

        results.push_back(cnt);
    }

    return results;
}

int main() {
    int t;
    cin >> t;
    
    vector<pair<int, vector<int> > > elements(t);

    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int j = 0; j < n; ++j) {
            cin >> a[j];
        }
        elements[i] = make_pair(n,a);
    }

    vector<int> results = prefixes(t, elements);

    for(int i=0; i< results.size(); i++)
        cout << results[i] << endl;

    return 0;
}
