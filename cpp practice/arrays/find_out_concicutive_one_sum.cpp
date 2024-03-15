class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxx=0, cnt=0;

        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=1){

                maxx = max(maxx,cnt);
                cnt = 0;
            }else {
                cnt++;
            }
        }

        maxx = max(maxx,cnt);

        return maxx;
    }
};