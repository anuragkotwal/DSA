class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        int res=0;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C"){
                res-=st.top();
                st.pop();
            }else if(ops[i]=="D"){
                st.push(st.top()*2);
                res+=st.top();
            }else if(ops[i]=="+"){
                int p1=st.top();
                st.pop();
                int p2=st.top();
                st.push(p1);
                res+=(p1+p2);
                st.push(p1+p2);
            }else{
                int num=stoi(ops[i]);
                res+=num;
                st.push(num);
            }
        }
        return res;
    }
};