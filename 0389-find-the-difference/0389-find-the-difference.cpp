class Solution {
public:
    char findTheDifference(string s, string t) {
       vector<char> ans;
        for(int i =0;i<t.size();i++){
            bool found = false;
            for(int j =0;j<s.size();j++){
                if(t[i] == s[j]){
                    s.erase(j,1);
                    found = true;
                    break;
                }

            }

            if(!found) {
                ans.push_back(t[i]);
            }
        }
        return ans[0];
    }
};