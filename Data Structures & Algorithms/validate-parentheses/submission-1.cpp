class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char b: s){
            if(b == '(' || b =='{' || b=='['){
                st.push(b);
            }
            else{
                if(!st.empty() && ((st.top() == '(' && b == ')') ||
                    (st.top() == '[' && b == ']')  || 
                    (st.top() == '{' && b == '}'))){
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
        
        if(!st.empty()){
            return false;
        }
        return true;
    }
};


// ([{}])
// next closing bracket should match the most recent opening bracket -> stack LIFO

// if open bracket -> push to stack
// else 
//     if matches
//         pop
//     else
//         return false


// if stack not empty
// return false


