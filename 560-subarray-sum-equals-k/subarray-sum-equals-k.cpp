class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size(),sum=0,rem,ans=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            rem=sum-k;
            if(rem==0)ans++;
            if(mp.find(rem)!=mp.end()){
                int cnt=mp[rem];
                ans+=cnt;
            }
            mp[sum]++;

        }
        return ans;
    }
};