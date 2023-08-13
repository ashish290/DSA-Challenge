class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    set<char>p;
    int start=0;
    int end=0;
    int max=0;
    while(start<s.size())
    {
        auto it = p.find(s[start]);
        if(it==p.end())
        {
            if(start-end+1>max)
                max=start-end+1;
            p.insert(s[start]);
            start++;
        }
        else
        {
            p.erase(s[end]);
            end++;
        }
    }
    return max;
    }
};