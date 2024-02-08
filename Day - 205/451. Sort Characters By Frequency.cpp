class Solution {
public:
    string frequencySort(string s) {
        string result = "";
        unordered_map<char,int>umap;
        priority_queue<pair<int,char>> max_heap;
        for(auto it : s) {
            umap[it]++;
        }
        for(auto it : umap) {
            max_heap.push({it.second,it.first});
        }
        while(!max_heap.empty()) {
            cout<<max_heap.top().second <<" "<<max_heap.top().first<<endl;
            result += string(max_heap.top().first,max_heap.top().second);
            cout<<result<<endl;
            max_heap.pop();
        }
        return result;
    }
};