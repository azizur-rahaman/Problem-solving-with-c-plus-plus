#include <iostream>

using namespace std;
const int MAX = 1e6;

int N, x, d[MAX+1];

void init(){
    for(int i = 1; i <= MAX; i++)
        for(int j = i; j <= MAX; j += i)
            d[j]++;
}

int main(){
    scanf("%d", &N);

    init();
    for(int i = 0; i < N; i++){
        scanf("%d", &x);
        printf("%d\n", d[x]);
    }
}