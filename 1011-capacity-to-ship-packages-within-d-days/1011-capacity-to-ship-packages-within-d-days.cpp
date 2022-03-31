class Solution {
public:
    
    bool isSubarr(vector<int>& weights, int mid, int days){
        int subarr=1,sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            if(sum>mid)
                sum=weights[i],subarr++;
        }
        return subarr<=days;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int mx=INT_MIN,sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            mx=max(weights[i],mx);
        }
        int l=mx,h=sum;
        if(days==weights.size())
            return mx;
        int res=0;
        while(l<=h){
            int mid = l+(h-l)/2;
            if(isSubarr(weights,mid,days)==true)
                res=mid,h=mid-1;
            else
                l=mid+1;
        }
        return res;
    }
};