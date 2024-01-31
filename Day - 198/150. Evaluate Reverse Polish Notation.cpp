class Solution {
public:
    int operation (int& a, int& b,const string& s) {
        if(s == "+") return b + a;
        if(s == "-") return b - a;
        if(s == "*") return b * a;
        return b / a;
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int result = 0;
        for(auto token : tokens) {
            if(token == "+" || token == "-" || token == "*" || token == "/") {
                int a = st.top();
                st.pop();
                int b = st.top();
                st.pop();
                result = operation(a,b,token);
                cout<<result<<" ";
                st.push(result);
            }
            else {
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};