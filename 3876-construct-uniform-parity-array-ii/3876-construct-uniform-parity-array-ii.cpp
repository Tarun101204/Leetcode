class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        sort(nums1.begin(), nums1.end());
        vector<int>nums2;
        if (nums1.size() > 0) {
            nums2.push_back(nums1[0]); 
        }
        for(int i =1;i<nums1.size();i++){
            if(nums1[i] % 2 != 0){
                nums2.push_back(nums1[i]);
            }
            if(nums1[i]%2==0){
                nums2.push_back(nums1[i]-nums1[0]);
            }
        }

        if(nums2[0]%2 == 0){
            for(int i =0;i<nums2.size();i++){
                if(nums2[i]%2 != 0)return false;
            }
        }

        if(nums2[0]%2 != 0){
            for(int i =0;i<nums2.size();i++){
                if(nums2[i]%2 == 0)return false;
            }
        }
        return true;
    }
};