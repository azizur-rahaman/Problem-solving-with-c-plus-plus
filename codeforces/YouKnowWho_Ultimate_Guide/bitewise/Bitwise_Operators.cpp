#include<stdio.h>

 

void solve() {
	int n,k;
    scanf("%d %d", &n, &k);

    int ormax=0, andmax=0, xormax=0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i+1; j <= n; j++)
        {   
            int orr = (i|j);
            int andd = (i&j);
            int xorr = (i^j);

            if(orr>ormax && orr < k) ormax = orr;
            if(andd > andmax && andd < k) andmax = andd;
            if(xorr > xormax && xorr < k) xormax = xorr;
        }
        
    }


    printf("%d\n%d\n%d\n", andmax, ormax, xormax);
    
}

int main()
{


	int t = 1;
	// cin >> t;
	while (t--) solve();

	return 0;
}