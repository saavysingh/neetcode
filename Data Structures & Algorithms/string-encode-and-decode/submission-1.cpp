class Solution {
public:

    string encode(vector<string>& strs) {
        int n = strs.size();
        string en;
        for(string s:strs){
            en.append(to_string(s.size()));
            en.append("#");
            en.append(s);
        }
        return en;

    }
// "5#Hello5World"
    vector<string> decode(string s) {
        vector<string> dec;
        int i = 0;
        // cout<<s<<endl;
        while(i<s.size()){
            string len;
            while(i<s.size() && s[i]!='#'){
                len.push_back(s[i]);
                i++;
            }
            // cout<<i<<endl;
            // break;
            string a;
            int j = 1, l = stoi(len);
            
            while( j<= l){
                a.push_back(s[i+j]);j++;
                // cout<<s[i+j]<<endl;
                // break;
            }
            dec.push_back(a);
            i += j;
        }
        return dec;
    }
};
