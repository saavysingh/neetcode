class Solution {
public:
    string removeDuplicates(string s, int k) {
        if(k > s.size() || s.size() == 1){
            return s;
        }
        stack<pair<char,int>> st;
        int count = 1, i = 1;
        for(int i = 0;i<s.size();i++){
            if(st.empty() || st.top().first != s[i]){
                st.push({s[i],1});
                continue;
            }
            if(st.top().first == s[i]){
                if(st.top().second == k-1){
                    //pop
                    for(int i = 1;i<k;i++){
                        st.pop();
                    }
                    continue;
                }
                else{
                    st.push({s[i],st.top().second + 1});
                }
            }


        }
    string r(st.size(),'1');
    for(int i = st.size()-1;i>=0;i--){
        r[i] = st.top().first;
        st.pop();
    }

        return r;
    }
};

// #max freq char <k