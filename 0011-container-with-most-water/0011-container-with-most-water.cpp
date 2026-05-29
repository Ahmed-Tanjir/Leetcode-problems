class Solution {
public:
    int maxArea(vector<int>& height) {
         
         int size = height.size()-1;

         int start = 0;
         int end = size;
         int mostwater = 0;

         while( start < end ){

            if(height[start] <= height[end]){

                mostwater = max(mostwater,height[start]*size);
                start++;
                size--;

            }

            if(height[end] <= height[start]){

                mostwater = max(mostwater, height[end]*size);
                end--;
                size--;

            }

         }

         return mostwater;

        
    }
};