class Solution {
public:
    string removeDuplicates(string s, int k) {
        if(k > s.size() || s.size() == 1){
            return s;
        }
        stack<pair<char,int>> st;
        for(int i = 0;i<s.size();i++){
            if(st.empty() || st.top().first != s[i]){
                st.push({s[i],1});
            }
            else if(st.top().first == s[i]){
                st.top().second++;
                if(st.top().second == k){
                st.pop();
                }
            }


        }
   string r = "";
while (!st.empty()) {
    auto top = st.top();
    st.pop();
    // Append the character (first) 'count' (second) times
    r.append(top.second, top.first);
}

// Since stack is LIFO, the string is currently backward
reverse(r.begin(), r.end());
return r;
    }
};

// #max freq char <k