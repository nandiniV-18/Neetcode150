class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int rem=target-nums[i];
            // Search for element 6
            auto it = find(nums.begin()+i+1, nums.end(), rem);
            if(it!=nums.end()){
                ans.push_back(i);
                int idx=it-nums.begin();
                ans.push_back(idx);
                return ans;
            }
        }
        return ans;
    }
};