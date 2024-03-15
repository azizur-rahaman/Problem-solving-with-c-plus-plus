int missingNumber(vector<int>&a, int N) {
    
    int n = (N * (N+1)) / 2;

    int sumA = 0;

    for(int i=0; i<a.size(); i++){
        sumA += a[i];
    }

    return  (n - sumA);
}