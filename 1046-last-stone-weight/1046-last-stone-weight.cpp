class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> q;
        for(int i:stones)
            q.push(i);
        while(q.size()>1){
            int a=q.top();
            q.pop();
            int b=q.top();
            q.pop();
            if(a!=b){
                q.push(abs(b-a));
            }
        }
        if(q.size()==0)
            return 0;
        else
            return q.top();
    }
};