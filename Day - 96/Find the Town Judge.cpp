class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> Count(n+1);
        for(auto& it:trust) {
            int u = it[0];
            int v = it[1];

            Count[v]++; 
            Count[u]--; 
        }
        for(int i = 1; i <= n; i++) {
            if(Count[i] == n-1)
            return i;
        }
        return -1;
    }
};