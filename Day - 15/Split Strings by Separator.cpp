class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        vector<string>ans;
        for(int i=0; i < words.size(); i++) {
            string s = words[i];
            string temp = "";
            for(auto j : s){
                if(j == separator && temp != ""){
                    ans.push_back(temp);
                    temp = "";
                }
                if(j != separator){
                    temp += j;
                }
            }
            if(temp != "")  
            ans.push_back(temp);
        }
        return ans;
    }
};