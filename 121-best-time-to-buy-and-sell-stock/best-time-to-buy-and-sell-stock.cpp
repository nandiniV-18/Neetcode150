class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=0;
        int n=prices.size(),mtn=0;
        for(int i=n-1;i>=0;i--){
            ans=max(ans,(mtn-prices[i]));
            mtn=max(mtn,prices[i]);
        }
        return ans;
    }
};