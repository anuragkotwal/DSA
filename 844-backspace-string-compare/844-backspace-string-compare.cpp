class Solution {
public:
    
    bool isEqual(stack<char> stack1, stack<char> stack2){
        if (stack1.empty() && stack2.empty())
          return true;
        else if (stack1.empty() || stack2.empty())
          return false;
        while (!stack1.empty() && !stack2.empty())
        {
          if (stack1.top() != stack2.top())
            return false;
          stack1.pop();
          stack2.pop();
        }
        if (stack1.empty() && stack2.empty())
          return true;
        else
          return false;
    }
    
    bool backspaceCompare(string s, string t) {
        stack<char> st1,st2;
        for(int i=0;i<s.size();i++){
            if(s[i]!='#')
                st1.push(s[i]);
            else if(!st1.empty() && s[i]=='#')
                st1.pop();
        }
        for(int i=0;i<t.size();i++){
            if(t[i]!='#')
                st2.push(t[i]);
            else if(!st2.empty() && t[i]=='#')
                st2.pop();
        }
        return isEqual(st1,st2);
    }
};