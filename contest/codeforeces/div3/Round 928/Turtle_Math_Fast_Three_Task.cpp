#include <iostream>
#include <vector>
using namespace std;

#define fori(n) for(int i = 0; i < n; ++i)
typedef vector<int> vi;

int main() {
    int t;
    cin>>t;

    while (t--)
    {
   
        int n;

        int arr[n];

    		int ans = 0;
    		long sum = 0;
    		for(int i=0;i<n;i++) {
    			
    			int val = sc.nextInt();
    			arr[i] = (long)val;
    			sum+=val;
    			//prefix[i] = sum;
    		}
    		
    		if(sum%3==0)
    		System.out.println(0);
    		else {
    			int got2 = 0;
    			for(int i=0;i<n;i++) {
    				long rem = sum-arr[i];
    				if(rem%3==0) {
    					got2 =1;
    					break;
    				}
    			}
    			if(got2==1) {
    				System.out.println(1);
    			}else {
    				long rem = sum%3;
    				rem = 3-rem;
    				if(rem<2)
    				System.out.println(1);
    				else
    					System.out.println(2);
    			}
    		}
    		t--;
    	}




    }
    
    return 0;
}
