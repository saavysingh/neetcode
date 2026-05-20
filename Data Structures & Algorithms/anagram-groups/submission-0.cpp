
    bool checkAnagram(string a, string b){
        if(a.size() != b.size()){
            return false;
        }
        vector<int> freq(26,0);
        for(int i = 0;i<a.size();i++){
            freq[a[i]-'a']++;
            freq[b[i]-'a']--;
        }

        for(auto i:freq){
            if(i != 0){
                return false;
            }
        }
        return true;
    }

class Solution {



public:

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        int n = strs.size();
        if(n == 0 ){
            return {{}};
        }
        vector<int> marked(n,false);

        for(int i = 0;i< n;i++){
            vector<string> anagram;
            if(marked[i]){continue;}
            anagram.push_back(strs[i]);
             for(int j = i+1;j<n;j++){
                if(marked[j]) continue;
                if(checkAnagram(strs[i],strs[j])){
                    anagram.push_back(strs[j]);
                    marked[j] = true;
                }
             }   
             answer.push_back(anagram);
        }
return answer;
    }
};
// if empty -> empty sublist 
// if no anagrams -> n sublists;
// if all anagrams -> 1 sublist

// for each word, find all anagrams in remaining list and group together,
// repeat with each subsequent word.
