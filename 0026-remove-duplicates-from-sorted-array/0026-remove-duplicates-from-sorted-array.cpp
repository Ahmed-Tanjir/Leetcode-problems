class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
           
        int size = nums.size();
        vector<int>nums1;
        int last = 0;

        for(int i = 0; i < size; i++){

            bool con = false;
            bool unic = true;

            for(int check : nums1){

                if(check == nums[i]){
                    last++;
                    con = true;
                }
            }

            if(con) continue;

            for(int j = 0; j < size; j++){

                if(i == j) continue;

                if(nums[i] == nums[j]){
                    nums1.push_back(nums[i]);
                    unic = false;
                    break;
                }
            }

            if(unic) nums1.push_back(nums[i]);
        }

        int k = nums1.size();

        for(int i = 0; i<k ; i++){

           nums[i] = nums1[i];

        }
       return k;
    }
};