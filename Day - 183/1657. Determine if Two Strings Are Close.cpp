class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int>freq1(26,0);
        vector<int>freq2(26,0);
        for(auto it : word1) {
            freq1[it - 'a']++;
        }
        for(auto it : word2) {
            freq2[it - 'a']++;
        }
        for(auto it : freq1)
        cout<<it<<" ";
        cout<<endl;
        for(auto it : freq2)
        cout<<it<<" ";
        cout<<endl;
        for(int i = 0; i < 26; i++) {
            if(freq1[i] != 0 && freq2[i] == 0 || freq1[i] == 0 && freq2[i] != 0)
            return false;
        }
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
        for(auto it : freq1)
        cout<<it<<" ";
        cout<<endl;
        for(auto it : freq2)
        cout<<it<<" ";
        for(int i = 0; i < freq1.size(); i++) {
            if(freq1[i] != freq2[i])
            return false;
        }
        return true;
    }
};