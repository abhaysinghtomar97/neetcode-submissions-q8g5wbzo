class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi = INT_MIN ; 
        int l = 0, r = heights.size()-1;
        while(l<r){
            int water = min(heights[r],heights[l])*(r-l);
            maxi = max(water, maxi);
            if(heights[l] < heights[r]) l++;
            else r--;
        }
        return maxi;
    }
};
