class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string st = "";
        string tt = "";
        stack<char>stt,ttt;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '#' && !stt.empty()) 
            stt.pop();
            else if(s[i] != '#')
            stt.push(s[i]);
        }
        for(int i = 0; i < t.size(); i++) {
            if(t[i] == '#' && !ttt.empty())
            ttt.pop();
            else if(t[i] != '#')
            ttt.push(t[i]);
        }
        while(!stt.empty()) {
            st.push_back(stt.top());
            stt.pop();
        }
        while(!ttt.empty()) {
            tt.push_back(ttt.top());
            ttt.pop();
        }
        return st == tt;
    }
};