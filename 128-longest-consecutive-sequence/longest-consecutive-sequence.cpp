class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return 1;
        int l=1,ans=0,prev=nums[0];
        for(int i=1;i<n;i++){
            if((nums[i]-prev)==1){
                l++;
                prev=nums[i];
            }
            else if(prev==nums[i]){
                for(int j=i;j<n;j++){
                    if(nums[j]!=prev){
                        i=j-1;break;
                    }
                }
            }
            else{
                ans=max(ans,l);
                prev=nums[i];
                l=1;
            }
        }
        ans=max(ans,l);
        return ans;
    }
};