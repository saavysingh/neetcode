class TimeMap {
            unordered_map<string,vector<pair<int,string>>> tmap;
public:
    TimeMap() {

    }
    
    void set(string key, string value, int timestamp) {

        tmap[key].push_back({timestamp,value});
    }
    
    string get(string key, int timestamp) {
        if(tmap.find(key) == tmap.end()) return "";

        int n = tmap[key].size();

        int left = 0, right = n-1,mid;
        while(left<=right){
            mid = (left + right)/2;
            if(tmap[key][mid].first <= timestamp) {
                left = mid +1;
            }
            else{
                right = mid -1;
            }
        }

        if(right>=0)return tmap[key][right].second;
        return "";
    }
};