class Solution {
public:
    int myAtoi(string s) {
        long int res=0;
        int sign=1;
        int i=0;
        if(s.size()==0)
            return 0;
        while(s[i]==' ' && i<s.size()){
            i++;
        }
        if(i==s.size())
            return 0;
        if(s[i]=='-'){
            sign=-1;
            i++;
        }
        else if(s[i]=='+')
            i++;
        while(s[i]>='0' and s[i]<='9'){
                res=res*10;
                if(res<=INT_MIN || res>=INT_MAX)
                    break;
                res = res + s[i]-'0';
            i++;
        }
        if(sign==-1)
            res = (-1)*res;
        if(res<=INT_MIN)
            return INT_MIN;
        if(res>=INT_MAX)
            return INT_MAX;
        return (int)res; 
    }
};