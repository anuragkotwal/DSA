class Solution {
public:
    string getSmallestString(int n, int k) {
        vector<char> ch(n);
        for(int i=0;i<n;i++){
            ch[i]='a';
            k--;
        }
        int i=ch.size()-1;
        while(k>=26){
            ch[i]='z';
            k-=25;
            i--;
        }
        ch[i]=(char)(k+'a');
        string str(ch.begin(),ch.end());
        return str;
    }
};