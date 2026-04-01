class Solution {
public:

    string encode(vector<string>& strs) {
        int n = strs.size();
        string s = "";
        for(string x : strs)
            s += x + "-";

    return s;
    }

    vector<string> decode(string s) {
      vector<string>ans;
      string str="";
      for(int i=0; i<s.size();i++){
        if(s[i] == '-'){
            ans.push_back(str);
            str ="";
            continue;
        }
        str += s[i]; 
      }
      return ans;
    }
};
