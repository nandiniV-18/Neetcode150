class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int n=s.size();
        int l=0,u=0,ans=0;
        while(l<n and u<n){
            auto it = mp.find(s[u]);
            if(it==mp.end()){
                mp[s[u]]=u;
                u++;
            }
            else{
                if((it->second)<l){
                    mp[s[u]]=u;
                    u++;
                }
                else{
                    ans=max(ans,(u-l));
                    l=mp[s[u]]+1;
                    mp[s[u]]=u;
                    u++;
                }
            }
        }
        ans=max(ans,(u-l));
        return ans;
    }
};