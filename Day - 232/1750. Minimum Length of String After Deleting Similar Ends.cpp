class Solution {
public:
    int minimumLength(string s) {
        if(s.length() == 1) 
        return 1;
        int low = 0;
        int high = s.length()-1;
        while(low < high && s[low] == s[high]) {
            cout<<low<<" ";
            cout<<high<<" "<<endl;
            char temp = s[low];
            while(low <= high && s[low] == temp) {
                low++;
            }
            while(low <= high && s[high] == temp) {
                high--;
            }
        }
        return high - low + 1;
    }
};