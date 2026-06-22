class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int mx=0;
        for( int num:nums){
            if(!s.count(num-1)){
                int len=0;
                while(s.count(num+len))
                len++;
                mx=max(mx,len);
            }
        }
        return mx;
    }
};



