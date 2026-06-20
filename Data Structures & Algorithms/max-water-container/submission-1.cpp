class Solution {
public:
    int maxArea(vector<int>& heights) {
        int mx=0;
        int l=0 , r=heights.size()-1;
        while(l<r){
             int currArea= (r-l)*min(heights[r],heights[l]);
             mx=max(mx,currArea);
             if(heights[l]<heights[r]){
                l++;
             }
             else if(heights[l]>heights[r]){
                r--;
             }
             else{
                if(heights[l+1]<heights[r-1]){
                    l++;
                }
                else{
                    r--;
                }
             }
        }
    return mx;
    }

};
