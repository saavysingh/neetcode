class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        if(n == 1) return {0};
        vector<int> ans(n,0);
        stack<int> st;  // 22 21 20         2 
        st.push(n-1);
        for(int i = n-2;i>=0;i--){
            if(!st.empty() && temperatures[i]< temperatures[st.top()]){
                ans[i] = st.top()-i;
                st.push(i);
            }
            else{
                while(!st.empty() && temperatures[st.top()] <= temperatures[i]){
                    st.pop();
                }
                if(st.empty()){
                    ans[i] = 0;
                }
                else{
                    ans[i] = st.top() - i;
                }
                st.push(i);
            }
   

        }
        return ans;
    }
};

// [30,38,30,36,35,40,28]
// [.         2, 1, 0 ,0]

// if i >= st.top()
// pop untill greater is found - if st empty -> 0
// push

// if <
// push