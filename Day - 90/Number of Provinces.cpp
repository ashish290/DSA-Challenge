class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        int cnt = 0;
        vector<int>visited(n,0);
        for(int i = 0; i < n; i++) {
            if(visited[i] == 0)
            cnt++;
            queue<int>qu;
            qu.push(i);
            while(!qu.empty()) {
                int node = qu.front();
                qu.pop();
                for(int j = 0; j < n; j++) {
                    if(isConnected[node][j] == 1 && visited[j] == 0) {
                        visited[j] = 1;
                        qu.push(j);
                    }
                }
            }
        }
        return cnt;
    }
};