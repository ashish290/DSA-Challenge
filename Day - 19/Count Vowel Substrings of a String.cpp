class Solution {
public:
    bool isVowel(char ch) {
        return (ch == 'a'||ch == 'e'||ch == 'i'||ch == 'o'||ch =='u');
    }
    int countVowelSubstrings(string word) {
        int n = word.size();
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            unordered_set<char> set;
            for(int j = i; j < n; j++) {
                if(isVowel(word[j])) {
                    set.insert(word[j]);
                }
                else
                break;
                if(set.size() == 5){
                    cnt++;
                }
            }
        }
        return cnt;
    }

};