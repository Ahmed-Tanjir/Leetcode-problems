class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int size = nums.size();
        
        int maxpro = nums[0];
        int minpro =nums[0];
        int result = nums[0];

        for(int i = 1; i < size; i++){

            if (nums[i] < 0) swap(maxpro,minpro);

            maxpro = max(nums[i], maxpro * nums[i]);
            minpro = min(nums[i], minpro * nums[i]);

            result = max(maxpro,result);


        }

        return result;

    }
};