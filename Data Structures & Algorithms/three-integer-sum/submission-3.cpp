class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        unordered_map<int, int> mpp;
            vector<vector<int>> res;

        for(int i = 0; i < n; i++){
            mpp[arr[i]]++;
        }
        for(int i = 0; i < n; i++){
            mpp[arr[i]]--;
            if(i > 0 && arr[i] == arr[i-1] ) continue;

            for( int j = i + 1; j < n; j++){
                mpp[arr[j]]--;

                if( j > i + 1 && arr[j] == arr[j-1]) continue;
                int target = -(arr[j] + arr[i]);


                if(mpp[target] > 0) res.push_back({target, arr[i], arr[j]});

            }

            for( int j = i+1; j < n; j++) mpp[arr[j]]++;
        }
        return res;
    }
};
