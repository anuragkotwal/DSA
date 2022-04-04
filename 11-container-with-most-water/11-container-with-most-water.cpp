class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0,r=height.size()-1,maxArea=INT_MIN;
        while(l<r){
            int dist=r-l;
            int heightofLine=min(height[l],height[r]);
            int area=dist*heightofLine;
            maxArea=max(maxArea,area);
            if(height[l]<height[r])
                l++;
            else
                r--;
        }
        return maxArea;
    }
};