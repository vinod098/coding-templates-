//  Valid Parentheses   characters '(', ')', '{', '}', '[' and ']'
// Input: "()"
// Output: true

 bool isValid(string s) {
        stack<char>st;
        for(int i=0;s[i];i++)
        {
           if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            { st.push(s[i]);  continue;}
            
            else if(st.empty()) return false; 
            else if((st.top()!='(' && s[i]==')') || (st.top()!='{'&&s[i]=='}') || (st.top()!='['&&s[i]==']'))
             return false;
               else st.pop();
        }
        return st.empty();
       }