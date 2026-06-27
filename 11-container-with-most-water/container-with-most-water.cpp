class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0,n=height.size();
        int l=0,u=n-1;
        while(l<u and u>0 and l<n){
            int area=(u-l)* min(height[l],height[u]);
            ans=max(ans,area);
            if(height[l]<height[u]){
                l++;
            }
            else{
                u--;
            }
        }
        return ans;
    }
};