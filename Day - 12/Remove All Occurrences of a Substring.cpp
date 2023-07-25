class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.length();
//Erase is the function which used in cpp for string to erase the element from string.
        
        while(n != 0 && s.find(part) < n){
            s.erase(s.find(part),part.length());
        }
        return s;
    }
};
