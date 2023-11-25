class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int>ans;
        int n = words.size();
        for(int i = 0; i < n; i++) {
            int m = words[i].size();
            for(int j = 0; j < m; j++) {
                if(words[i][j] == x) {
                    cout<<words[i][j]<<" ";
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};