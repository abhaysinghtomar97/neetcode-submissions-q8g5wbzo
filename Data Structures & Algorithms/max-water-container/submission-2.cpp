class Solution {
public:
    int maxArea(vector<int>& heights) {
       int r = heights.size()-1;
       int l = 0;
       int water , maxi = INT_MIN;

        while(l < r){
        water = min(heights[r], heights[l])*(r-l);
        maxi = max(maxi, water);

        if(heights[l] < heights[r]) l++;
        else  r--;
        }
    return maxi;
    }
};
