class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int count=0,l=0,h=people.size()-1;
        while(h>=l){
            if(people[l]+people[h]<=limit){
                l++;h--;
            }else
                h--;
            count++;
        }
        return count;
   }
};