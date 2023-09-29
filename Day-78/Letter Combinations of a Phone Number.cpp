class Solution {
public:
    void combination(vector<string>& ans,unordered_map<char,string>& umap, int idx,string &digits,string &str) {
        if(idx == digits.size()){
        ans.push_back(str);
        return;
        }

        char demo = digits[idx];
        string temp = umap[demo];
        for(int i = 0; i < temp.size(); i++) {
            str.push_back(temp[i]);
            combination(ans,umap,idx+1,digits,str);
            str.pop_back();
        }
    }
    
    vector<string> letterCombinations(string digits) {
        if(digits.size() == 0) 
        return {};

        unordered_map<char,string>umap;
        umap['2'] = "abc";
        umap['3'] = "def";
        umap['4'] = "ghi";
        umap['5'] = "jkl";
        umap['6'] = "mno";
        umap['7'] = "pqrs";
        umap['8'] = "tuv";
        umap['9'] = "wxyz";
        vector<string>ans;
        string str = "";
        combination(ans,umap,0,digits,str);
        return ans;
    }
};