class Solution {
public:
    bool isPathCrossing(string path) {
        int x = 0, y = 0;
        set<pair<int,int>>s;
        s.insert({0,0});
        for(auto p : path) {
            if(p == 'N') {
                y++;
            } 
            else if(p == 'E') {
                x++;
            }
            else if(p == 'S') {
                y--;
            }
            else {
                x--;
            }

            if(s.find({x,y}) != s.end()) {
                return true;
            }
            s.insert({x,y});
        }
        return false;
    }
};