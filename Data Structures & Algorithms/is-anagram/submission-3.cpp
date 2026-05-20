class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
        vector<int> freqMap(26,0);
        for(int i = 0; i< s.size(); i++){
            int sIndex = s[i] - 'a';
            int tIndex = t[i] - 'a';
            freqMap[sIndex]++;
            freqMap[tIndex]--;
        }
        for(int i : freqMap){
            if(i != 0){
                return false;
            }
        }
        return true;
    }
};

// sorting both strings - O(nlog n)
// compare  - O(n)


// frequency arrays compute - O(n)x2
// compare - On
// [26]
// increment char of first string
// decrement char of second string

// check all zeroes