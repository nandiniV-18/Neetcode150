class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int rem=target-nums[i];
            auto it = std::find(nums.begin()+i+1, nums.end(), rem);
            if(it!=nums.end()){
                int index = it - nums.begin(); 
                ans.push_back(i);
                ans.push_back(index);
                return ans;
            }
        }
        return ans;
    }
};