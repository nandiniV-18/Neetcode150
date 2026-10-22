class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int elements=m*n,total=0,i=0,j=0,times=0,colj=0,coli=0;
        int idxj=0,idxi=0,k=0,l=0;
        while(total<elements){
            
            if(times%2==0){
                
                for(idxj=j;idxj<n;idxj++){
                    ans.push_back(matrix[i][idxj]);
                    // cout<<matrix[i][idxj]<<"*";
                    total++;
                }
                i++;
                idxj--;
                for(idxi=i;idxi<m;idxi++){
                    ans.push_back(matrix[idxi][idxj]);
                    cout<<matrix[idxi][idxj]<<"*";
                    total++;
                }
                times++;
            }
            else{
                idxj--;
                idxi--;
                for(k=idxj;k>=colj;k--){
                    ans.push_back(matrix[idxi][k]);
                    // cout<<matrix[idxi][k]<<"*";
                    total++;
                }
                idxi--;
                for(l=idxi;l>coli;l--){
                    ans.push_back(matrix[l][colj]);
                    // cout<<matrix[l][colj]<<"*";
                    total++;
                }
                colj++;
                coli++;
                i=l+1;
                j=colj;
                times++;
                n--;m--;
            }
        }
        return ans;
    }
};