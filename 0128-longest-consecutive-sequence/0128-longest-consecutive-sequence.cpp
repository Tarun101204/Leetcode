
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(int num : nums) {
            st.insert(num);
        }
        int maxi = 0;
        for(int num : st) {
            if(num == INT_MIN || st.find(num - 1) == st.end()) {
               int curr = num;
                 int count = 1;
                while(curr != INT_MAX && st.find(curr + 1) != st.end()) {
                     curr++;
                    count++;
                }
                maxi = max(maxi, count);
            }
        }
        return maxi;
    }
};
