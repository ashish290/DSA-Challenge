class Solution {
public:
    long long compare(vector<int>& piles, int mid) {
        long long sum = 0;
        for(int i = 0; i < piles.size(); i++) {
            int temp = ceil(piles[i] / (double)mid);
            sum += temp;
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1;
        int e = *(max_element(piles.begin(),piles.end()));
        while(s <= e) {
            int mid = s + (e - s)/2;
            long long val = compare(piles,mid);
            if(val <= h) {
                e = mid-1;
            }
            else {
                s = mid+1;
            }
        }
        return s;
    }
};