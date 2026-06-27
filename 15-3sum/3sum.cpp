#include <set>
#include <vector>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        set<vector<int>> st;
        std::sort(nums.begin(), nums.end());
        int n=nums.size();
        for(int i=0;i<n;i++){
            int l=i+1,u=n-1,target=0-nums[i];
            while(l<u and u>0 and l<n){
                if((nums[l]+nums[u])<target){
                    l++;
                }
                else if((nums[l]+nums[u])>target){
                    u--;
                }
                else{
                    st.insert({nums[i],nums[l],nums[u]});
                    l++;
                    u--;
                }
            }
        }
        for(auto it:st){
            ans.push_back(it);
        }
        return ans;
    }
};