class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> parenthesis;
        string temp;
        createParenthesis(n,n,temp,parenthesis);
        return parenthesis;
        
    }

private:
    void createParenthesis(int opened, int closed, string &temp, vector<string> &parenthesis ){

        if(opened == 0 && closed == 0){
            parenthesis.push_back(temp);
            return;
        }
        if(opened>0){temp.push_back('(');
        createParenthesis(opened-1, closed, temp, parenthesis);
        temp.pop_back();}
        if(closed>opened){temp.push_back(')');
        createParenthesis(opened, closed-1, temp, parenthesis);
        temp.pop_back();}

        return;
    }
};
