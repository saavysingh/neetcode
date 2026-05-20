class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0, maxLen = 0;
        unordered_map<char,int> hmap;
        for(int i = 0; i< s.size(); i++){
            if(hmap.find(s[i])==hmap.end() || hmap[s[i]] < start){
                hmap[s[i]] = i;
            }
            else{
                start = hmap[s[i]] + 1;
                hmap[s[i]] = i;
            }
            maxLen = max(maxLen, i - start + 1);
        }       
        return maxLen;
    }
};

// abba

// start = 2, maxLen = 2

// // a:0
// a:0
// b:2


// initialize start and max length and map
// iterate the string
// if i is not in map or i < start
//     add to map with index
// else 
//     find index in map 
//     start = index + 1
//     update map index to i
// max length = (i - start + 1, max length)

// return max length




