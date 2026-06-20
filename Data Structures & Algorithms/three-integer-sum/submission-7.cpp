class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        for(int i=0; i<nums.size(); i++){
            int l= i+1, r=nums.size()-1, curr =0;

            while(l<r){
              curr = nums[i]+nums[l]+nums[r];
                if(curr>0){
                    r--;
                }
                else if(curr<0){
                    l++;
                }
                else{
                    res.push_back({nums[i],nums[l],nums[r]});
                    l++;
                    r--;
                }
            }
        }
        set<vector<int>>v1(res.begin(),res.end());
        vector<vector<int>>v(v1.begin(),v1.end());
        return v;
    }
};
