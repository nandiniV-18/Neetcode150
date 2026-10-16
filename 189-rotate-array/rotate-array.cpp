class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size(),j=0,l=0;
        vector<int>vec (n,0);
        k%=n;
        for(int i=n-k;i<n;i++){
            vec[j]=nums[i];
            j++;
        }
        for(int i=k;i<n;i++){
            vec[i]=nums[l];
            l++;
        }
        for(int i=0;i<n;i++){
            nums[i]=vec[i];
        }
    }
};