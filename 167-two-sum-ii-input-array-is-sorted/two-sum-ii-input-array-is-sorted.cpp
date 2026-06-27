class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int l=0,n=nums.size();
        int u=n-1;
        while(l<u and u>0 and l<n){
            if((nums[l]+nums[u])<target){
                l++;
            }
            else if((nums[l]+nums[u])>target){
                u--;
            }
            else{
                ans.push_back(l+1);
                ans.push_back(u+1);
                break;
            }
        }
        return ans;
    }
};