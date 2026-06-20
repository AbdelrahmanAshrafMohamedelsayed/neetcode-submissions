class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> occ;
        for(int i=0 ; i<nums.size(); i++){
            int wanted = target-nums[i];
            if(occ.count(wanted)){
                return {occ[wanted],i};
            }
            else{
                occ[nums[i]]=i;
            }
            

        }
        return {};
    }
};
