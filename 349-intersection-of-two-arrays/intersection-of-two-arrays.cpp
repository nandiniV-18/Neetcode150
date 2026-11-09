class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>ans;
        int idx1=0,idx2=0,n=nums1.size(),m=nums2.size();
        unordered_set<int>check;
        while(idx1<n and idx2<m){
            if(nums1[idx1]==nums2[idx2]){
                auto it=check.find(nums1[idx1]);
                if(it==check.end()){
                    ans.push_back(nums1[idx1]);
                }
                check.insert(nums1[idx1]);
                idx1++;
                idx2++;
            }
            else if(nums1[idx1]<nums2[idx2]){
                idx1++;
            }
            else if(nums1[idx1]>nums2[idx2]){
                idx2++;
            }
        }
        return ans;
    }
};