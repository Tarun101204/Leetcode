class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max_count =0;
        int left =0;
        unordered_map<char,bool>mp;
        for(int i =0;i<s.size();i++){
           while(mp[s[i]] == true){
                mp[s[left]] =false;
                left++;
           }
           mp[s[i]] =true;
           max_count = max(max_count , i -left +1);
        }

        return max_count;

    }
};