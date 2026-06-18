class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer(2);
        unordered_map<int,int> mp;
        for(int i=0; i<nums.size(); i++){
            if(mp.count(target-nums[i])){
                int least = min(i,mp[target-nums[i]]);
                int mx = max(i,mp[target-nums[i]]);
                answer[0]=least;
                answer[1]=mx;
                return answer;
            }
            mp[nums[i]]=i;
        }
    }
};
