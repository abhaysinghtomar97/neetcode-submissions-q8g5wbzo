class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi = INT_MIN, water ; 
        for(int i = 0; i< heights.size(); i++){
            for(int j = i + 1; j < heights.size(); j++){
                    water = min(heights[i], heights[j]) * (j - i);

                    maxi = max(maxi, water);
            }
        }
        return maxi;
    }
};
