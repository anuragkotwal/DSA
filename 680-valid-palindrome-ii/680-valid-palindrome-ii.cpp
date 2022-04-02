class Solution {
public:
    
    bool Palindrome(string s, int l, int h){
        while(l<h){
            if(s[l]==s[h])
                l++,h--;
            else
                return false;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int l=0,h=s.size()-1;
        while(l<h){
             if(s[l]==s[h])
                 l++,h--;
             else return Palindrome(s,l+1,h)||Palindrome(s,l,h-1);
        }
        return true;
    }
};