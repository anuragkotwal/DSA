class Solution {
public:
    static bool comp(string &s1, string &s2){
        return (s1+s2)>=(s2+s1);
    }
    string largestNumber(vector<int>& nums) {
        vector<string> str(nums.size(),"");
        int count=0;
        for(auto i:nums)
            if(i==0)
                count++;
        if(count==nums.size())
            return "0";
        for(int i=0;i<nums.size();i++)
            str[i]=to_string(nums[i]);
        sort(str.begin(),str.end(),comp);
        string res="";
        for(int i=0;i<str.size();i++)
            res+=str[i];
        return res;
    }
};