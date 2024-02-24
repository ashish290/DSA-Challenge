class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<int>distance(n,INT_MAX);
        unordered_map<int,vector<pair<int,int>>>adj;
        for(auto it : flights) {
            int u = it[0];
            int v = it[1];
            int cost = it[2];
            adj[u].push_back({v,cost});
        }
        queue<pair<int,int>>qu;
        qu.push({src,0});
        distance[src] = 0;
        int i = 0;
        while(!qu.empty() && i <= k) {
            int N = qu.size();
            while(N--) {
            int node = qu.front().first;
            int dis = qu.front().second;
            qu.pop();
            for(auto it : adj[node]) {
                int v = it.first;
                int cost = it.second;
                if(distance[v] > cost + dis) {
                    distance[v] = cost + dis;
                    qu.push({v,cost + dis});
                }
              }
            }
            i++;
        }
        if(distance[dst] == INT_MAX) 
        return -1;
        return distance[dst];
    }
};