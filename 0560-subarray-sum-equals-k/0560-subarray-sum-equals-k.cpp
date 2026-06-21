class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        int size = nums.size()-1;

        int ans = 0;

        for(int st = 0; st<=size; st++){
            int sum = 0;
            for(int end = st; end<=size; end++){

                sum += nums[end];

                if(sum == k) ans++;

            }

        }

        return ans;
        
    }
};