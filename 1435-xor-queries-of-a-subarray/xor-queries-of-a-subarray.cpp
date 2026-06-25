class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int>ans,check;
        int n=arr.size();
        int x=arr[0];
        check.push_back(x);
        for(int i=1;i<n;i++){
            x=x^arr[i];
            check.push_back(x);
        }
        for(int i=0;i<queries.size();i++){
            int j=queries[i][0];
            int k=queries[i][1];
            if(j==0)ans.push_back(check[k]);
            else {
                int val=check[k]^check[j-1];
                ans.push_back(val);
            }
        }
        return ans;
    }
};