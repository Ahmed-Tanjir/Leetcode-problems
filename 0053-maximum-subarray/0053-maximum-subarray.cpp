class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int size = nums.size();
        int maxsum = INT_MIN;
        int cursum = 0;

        for(int i = 0; i < size; i++){

            cursum += nums[i];
            maxsum = max(maxsum,cursum);

            if(cursum < 0) cursum = 0;

        }

        return maxsum;
  
    }
};