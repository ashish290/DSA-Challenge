class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int lst_g = 0 ,lst_m = 0 ,lst_p = 0;
        int pickup = 0;
        int result = 0;
        int n = garbage.size();
        for(int i = 0; i < n; i++) {
            for(auto& it : garbage[i]) {
                pickup++;
                if(it == 'G') lst_g = i;
                if(it == 'M') lst_m = i;
                if(it == 'P') lst_p = i;
            }
        }
        for(int i = 1; i < travel.size(); i++) {
            travel[i] += travel[i-1];
        }
        if(lst_g != 0) {
            result += travel[lst_g - 1];
        }
        if(lst_m != 0) {
            result += travel[lst_m - 1];
        }
        if(lst_p != 0) {
            result += travel[lst_p - 1];
        }
        return result + pickup;
    }
};