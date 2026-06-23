class Solution {
public:
    bool isvalid(vector<int>& position, int balls, int currentpos, int size){
        int count = 1, lastbasketpos = position[0];

        for(int i=1; i<= size; i++){
            if(position[i] - lastbasketpos >= currentpos){
                count++;
                lastbasketpos = position[i];

            }
            if(count == balls) return true;
        }
        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin() , position.end());
        int ans = -1;
        int size = position.size()-1;
        int start = 1;
        int end = position[size] - position[0];

        while(start <= end){
            int mid = start + (end-start)/2;
            if(isvalid(position, m, mid, size)){
               ans = mid;
            start = mid+1;
            }
            else end = mid-1;
        }
        return ans;
    }
};