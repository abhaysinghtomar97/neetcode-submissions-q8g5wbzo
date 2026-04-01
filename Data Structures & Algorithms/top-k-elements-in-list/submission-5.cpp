class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        
        map<int,int> freq;

        for(int num : nums)
            freq[num]++;

        vector<vector<int>> bucket(n+1);   //bucket sort
        vector<int>ans;

        for(auto it : freq){
            int elem = it.first;
            int fre = it.second;
            bucket[fre].push_back(elem);
        }

        for(int i = bucket.size()-1; i >= 0 && ans.size() < k; i--){
            for(int x : bucket[i]){
                ans.push_back(x);

            if(ans.size() == k) break;
            }
        }
        
        return ans;
    }
};
