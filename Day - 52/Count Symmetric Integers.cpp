class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;
        for(int i = low; i <= high; i++) {
            string temp = to_string(i);
            int size = temp.size();
            if(size % 2 == 0 && 
               accumulate(temp.begin(),temp.begin() + size/2,0) ==
               accumulate(temp.begin()+size/2,temp.end(),0)
            ) cnt++;
        }
        return cnt;
    }
};