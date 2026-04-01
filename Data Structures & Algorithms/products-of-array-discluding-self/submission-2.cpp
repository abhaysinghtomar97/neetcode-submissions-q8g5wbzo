class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod = 1;
        vector<int>ans;
        for(int i=0; i<n; i++){
            prod=1;
            for(int j=0; j<n; j++){
                if(i!=j){
                   prod *= nums[j];
                } 
                
            }
            ans.push_back(prod);
        }
       
        return ans;
    }
};
