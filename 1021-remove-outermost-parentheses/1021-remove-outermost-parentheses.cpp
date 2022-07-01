class Solution {
public:
    string removeOuterParentheses(string s) {
        //initialize a stack of characters, string variable to store the results
        stack<char> st;
        string result="";
        
        //loop over the whole entered string input
        for(int i=0;i<s.size();i++){
            //if the input is opened parenthese
            if(s[i]=='('){
                //if the stack isn't empty-> add to the variable, concatinate 
                if(!st.empty()){
                    result+=s[i];
                }
                //then, susbend it to the stack
                st.push(s[i]);
            }
            //if the input is closed parenthese
            else{
                //if the stack has more than 1 element-> add it to the variable
                if(st.size()>1){
                    result+=s[i];
                }
                //remove the top of the stack
                st.pop();
                
            }
        }
        return result;
    }
};