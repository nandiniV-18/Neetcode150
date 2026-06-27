class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();
        int l=0,u=n-1,idx=-1,v=-1;
        while(l<=u){
            int m=(u+l)/2;
            if(target<nums[m]){
                u=m-1;
            }
            else if(target>nums[m]){
                l=m+1;
            }
            else{
                int flag=0;
                for(int i=l;i<=u;i++){
                    if(flag==0 && nums[i]==target){
                        ans.push_back(i);
                        v=i;
                        flag=1;
                    }
                    else if(nums[i]==target){
                        idx=i;
                    }
                }
                break;
            }
        }
        if(u<l)return{-1,-1};
        if(idx==-1){
            ans.push_back(v);
        }
        else{
            ans.push_back(idx);
        }
        return ans;
    }
};