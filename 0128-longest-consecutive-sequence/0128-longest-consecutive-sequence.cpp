class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> uset(nums.begin(),nums.end());
        int ans = 0;
        
        for(int num:uset){
            if(uset.find(num-1) == uset.end()){
                int longSequence =1;

                while(uset.find(num+1) != uset.end()){
                    longSequence++;
                    num++;
                }
                                
                ans = max(ans,longSequence);
            
            }

        }

        return ans;
        
    }
};