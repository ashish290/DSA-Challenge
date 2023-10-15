class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int>p(1001);
        for(int i = 0; i < p.size(); i++) 
        p[i] = i;

        vector<int>ans;
        for(auto it:edges) {
            int n1 = it[0];
            int n2 = it[1];
            while(n1 != p[n1]) n1 = p[n1]; 
            while(n2 != p[n2]) n2 = p[n2];
            if(n1 == n2)
            ans = it;
            else 
            p[n1] = n2; 
        }
        return ans;
    }
};