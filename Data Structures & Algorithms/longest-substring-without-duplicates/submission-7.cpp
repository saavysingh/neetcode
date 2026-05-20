class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<=1){
            return s.size();
        }
        int i = 0, j = 1, len = 0;
        unordered_map<char,int> imap;
        imap[s[i]]=0;
        while(j<s.size()){
            if(imap.find(s[j]) != imap.end() ){
                int dupIndex = imap[s[j]];
                // for(int k = i;k<=dupIndex;k++){
                //     imap.erase(s[k]);
                // }
                // a:0, b:1, 
                if(dupIndex>=i && dupIndex<j){
                i = dupIndex+1;
                }
            }
                imap[s[j]] = j;
                len = max(len, j-i+1);
                j++;
        }
        return len;
    }
};

// zxyzxyz
//  i  j
// {
//     z:0, x: 1, y: 2
// }

// if duplicate 
//     remove all char in map till duplicate index if their index<duplicate index
//     update i to duplicate index +1
//     update duplicate index
// else
//     add to map with index
//     increment j
//     update len

// len = 3