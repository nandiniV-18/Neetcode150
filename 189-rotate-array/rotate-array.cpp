class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        int l=n-k;
        reverse(nums.begin()+l,nums.end());
        reverse(nums.begin(),nums.end());
        reverse(nums.begin()+k,nums.end());
    }
};