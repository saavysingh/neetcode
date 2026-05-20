class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string,vector<string>> freqMap;
        vector<vector<string>> group;
        for(string s : strs){
            string freqArray(26,'0');
            for(char c: s){
                freqArray[c-'a']++;
            }
// calc freqArray
//     string(26,'0')
//     for char in string
//         update that index to 1;
            if(freqMap.find(freqArray) != freqMap.end()){
                freqMap[freqArray].push_back(s);
            }
            else{
                 freqMap[freqArray] = {s};
            }
        }
        
        for(auto i : freqMap){
            group.push_back(i.second);
        }
        return group;
    }
};

// freqArray map<string,vector<string>>

// for each string
//     calc freqArray
//     if freqArray in map
//         append string to value
//     else
//         insert freqArray with value;


// iterate map and collect all vectors of anagrams

// calc freqArray
//     string(26,'0')
//     for char in string
//         update that index to 1;


// "10100000.....10000.." 26