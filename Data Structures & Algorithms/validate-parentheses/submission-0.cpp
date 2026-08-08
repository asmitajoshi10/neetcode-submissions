class Solution {
public:
    bool isValid(string s) {
        stack<char> str;
        for(char c:s){
            if(c=='(' || c=='{' || c=='['){
                str.push(c);
            }
            else{
                if(str.empty()) return false;
                char top = str.top();
                str.pop();
                if(c==')' && top!='(' ||
                   c=='}' && top!='{' ||
                   c==']' && top!='[') return false; 
            }
        } return str.empty();
    }
};
