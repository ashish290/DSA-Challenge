class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        unordered_map<char,int>ch;
        for(char c : chars) {
            ch[c]++;
        }
        int result = 0;
        for(auto& word : words) {
            unordered_map<char, int> copy = ch;
            for(auto c : word) {
                if(copy.find(c) != copy.end() && copy[c] != 0) {
                    copy[c] -= 1;
                } else {
                    result -= word.length();
                    break;
                }
            }
            result += word.length();
        }
        return result;
    }
};