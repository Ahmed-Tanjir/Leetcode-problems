class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int size = nums.size()-1;
        if(size == -1) return 0;
        int ans = 1;
        int tempans = 1;

        for(int i=size; i>0; i--){
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] - nums[i-1] == 1){
                tempans++;
                ans = max(ans,tempans);
            }
            else{
                tempans = 1;
            }

            //ans = max(ans,tempans);

        }

        return ans;


        
        
    }
};