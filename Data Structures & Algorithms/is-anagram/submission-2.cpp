class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        unordered_map <char,int> hmap;
        for(char i : s){
            if(hmap.find(i) != hmap.end()){
                hmap[i]++;
            }
            else{
                hmap[i] = 1;
            }
        }

        for(char i : t){

            hmap[i]--;
            if(hmap[i] < 0){
                return false;
            }
        }
        return true;
    }
};
