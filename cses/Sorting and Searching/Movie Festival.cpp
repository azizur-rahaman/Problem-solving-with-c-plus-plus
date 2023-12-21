#include <bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin >> t;

    vector<pair<long long ,long long>> moviesTimes;

    while (t--) {
        long long start, end;
        cin >> start >> end;
        moviesTimes.push_back(make_pair(end,start));
    }

    sort(moviesTimes.begin(), moviesTimes.end());



    long long counter=0, previousEndTime = INT_MIN;

    for (auto [endTime, startTime] : moviesTimes)
    {
        if(startTime >= previousEndTime) {
            counter++;
            previousEndTime = endTime;
        }
    }


    cout << counter << endl;

    return 0;
}
