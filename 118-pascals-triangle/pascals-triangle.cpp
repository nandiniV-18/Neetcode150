class Solution {
public:
    vector<vector<int>> generate(int num) {
        vector<vector<int>>ans;
        vector<int>k;
        k.push_back(1);
        if(num==1){
            ans.push_back(k);
            return ans;
        }
        else{
            ans.push_back(k);
            k.push_back(1);
            ans.push_back(k);
            for(int i=3;i<=num;i++){
                vector<int>check;
                check.push_back(1);
                for(int j=1;j<k.size();j++){
                    int sum=k[j]+k[j-1];
                    check.push_back(sum);
                }
                check.push_back(1);
                ans.push_back(check);
                k=check;
            }
            return ans;
        }
        return ans;
    }
};