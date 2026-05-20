class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n = tokens.size();
        int prev = stoi(tokens[0]);
        stack<string> st;
        // st.push(tokens[0]);
        if(n == 1){
            return prev;
        }
        int i = 0,val;
        while(i<n){
            while(i<n && ((tokens[i] != "+") &&
            (tokens[i] != "*")&&(tokens[i] != "-")&&(tokens[i] != "/"))){
                st.push(tokens[i]);i++;
            }
            if(i>=n) break;
            val = stoi(st.top());
            st.pop();
            if(tokens[i] == "+"){
                    val += stoi(st.top());
            }else if(tokens[i] == "-"){
                val = stoi(st.top()) - val;
             }else if(tokens[i] == "/"){
            val = stoi(st.top())/val;
             }else if(tokens[i] == "*"){
                    val *= stoi(st.top());

            }
        st.pop();
        st.push(to_string(val));
        i++;
            
        }
        return val;
        
    }
}; 
// "1" "2" 
// ["1","2","+","3","*","4","-"]