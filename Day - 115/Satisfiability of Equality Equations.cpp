class Solution {
public:
vector<int>parent;
vector<int>rank;
        int find(int n) {
            if(parent[n] == n) {
            return n;
            }
            return parent[n] = find(parent[n]);
        }
        void Union(int x, int y) {
            int x_parent = find(x);
            int y_parent = find(y);
            if(x_parent == y_parent) 
            return;
            if(rank[x_parent] > rank[y_parent]) 
            parent[y_parent] = x_parent;
            else if(rank[x_parent] < rank[y_parent])
            parent[x_parent] = y_parent;
            else {
                parent[x_parent] = y_parent;
                rank[y_parent] += 1;
            }
        }
    bool equationsPossible(vector<string>& equations) {
        parent.resize(26);
        rank.resize(26,0);
        for(int i = 0; i < 26; i++) {
            parent[i] = i;
        }
        for(auto &it : equations) {
            if(it[1] == '=') {
                Union(it[0]-'a',it[3]-'a');
            }
        }
        for(auto &it : equations) {
            if(it[1] == '!') {
                char first = it[0];
                char second = it[3];

                int first_parent = find(first-'a');
                int second_parent = find(second-'a');

                if(first_parent == second_parent)
                return false;
            }
        }
         return true;
    } 
};