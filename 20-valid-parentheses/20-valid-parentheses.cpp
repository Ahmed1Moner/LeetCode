class Solution {
public:
    bool isValid(string s) {
        
        //initialize a stack from character type with name s1
        stack<char> s1;
        
        //loop over the whole string
        for(int i=0;i<s.length();i++){
            
            //if the stack is empty, add the parenthese to it
            if(s1.empty())
                s1.push(s[i]);
            
            //the entered parenthese must be from the same type of the one after it & in the correct order, the top from the same type
            else if(s[i]==')'&&s1.top()=='('||s[i]=='}'&&s1.top()=='{'||s[i]==']'&&s1.top()=='[')
                s1.pop();
            
            //if not, push again the next one
            else
                s1.push(s[i]);
            
        }
        
        //for a valid parentheses, the stack must be empty
        if(s1.empty())
            return true;
        
        else
            return false;
        
    }
};