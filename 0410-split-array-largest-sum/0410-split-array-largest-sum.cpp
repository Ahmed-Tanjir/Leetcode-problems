class Solution {
public:

    bool isvalid(vector<int>&nums, int size, int k, int maxsum){
        int part = 1;
        int sum = 0;

        for(int i=0; i<size; i++){
            if(nums[i] > maxsum) return false;

            if(sum + nums[i] <= maxsum){
                sum += nums[i];
            }
            else{
                part++;
                sum = nums[i];
            }

        }

        return part > k ? false : true;

    }

    int splitArray(vector<int>& nums, int k) {

        int size = nums.size();

        if(k>size) return -1;

        int sum = 0;
        for(int i=0; i<size; i++){
            sum += nums[i];
        }

        int ans = -1;
        int start = 0;
        int end = sum;

        while(start <= end){
            int mid = start + (end-start)/2;

            if(isvalid(nums,size,k,mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }

        return ans;
        
    }
};