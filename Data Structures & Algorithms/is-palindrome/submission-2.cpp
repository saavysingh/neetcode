class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0, j = s.size()-1;


        while(i<j){
            s[i] = tolower(s[i]);
            s[j] = tolower(s[j]);
            if((s[i]-'a'<0 || s[i]-'z'>0) && (s[i]-'0'<0 || s[i]-'9'>0)){
                i++; continue;
            }
            if((s[j]-'a'<0 || s[j]-'z'>0) && (s[j]-'0'<0 || s[j]-'9'>0)){
                j--; continue;
            }
            
            if(s[i] != s[j]){
                return false;
            }
            i++;j--;
        }
        return true;
    }
};


// edge cases

// case: a or A -> valid
// non-alphanumeric? skip
// numbers-> valid


// a-z, 0-9