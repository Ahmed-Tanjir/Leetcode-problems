class Solution {
public:

    bool isvalid(vector<int>& weights, int maxcap, int days){
        int size = weights.size()-1;
        int load = 0;
        int count = 1;

        for(int i=0; i<=size; i++){
            if(load + weights[i] <= maxcap){
                load += weights[i];
            }
            else{
                count ++;
                load = weights[i]; 
            } 
        }
        return count <= days;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int size = weights.size()-1;
        int maxcap = 0;
        int mincap = 0;
        int ans = -1;

        for(int i=0; i<=size; i++){
            mincap = max(mincap,weights[i]);
            maxcap += weights[i];
        }

        while(mincap <= maxcap){
            int mid = mincap+(maxcap-mincap)/2;

            if(isvalid(weights,mid,days)){
                ans = mid;
                maxcap = mid-1;
            }
            else{
                mincap = mid+1;
            }
        }

        return ans;
    }
};