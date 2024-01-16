class RandomizedSet {
public:
vector<int>temp;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        for(int i = 0; i < temp.size(); i++) {
            if(val == temp[i]) {
                return false;
            }
        }
        temp.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        auto remo = find(temp.begin(),temp.end(),val);
        if(remo != temp.end()) {
            temp.erase(remo);
            return true;
        }
        return false;
    }
    
    int getRandom() {
        int n = rand()%temp.size();
        return temp[n];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */