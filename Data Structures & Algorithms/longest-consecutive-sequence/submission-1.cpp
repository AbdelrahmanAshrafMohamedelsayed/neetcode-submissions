class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        int mx=0;
        for(int x:s){
            int i=0;
            if(s.count(x-i)){
                while(s.count(x-i)){
                    mp[x]++;
                    i++;
                }
                mx=max(mx,mp[x]);
            }
            else{
                mp[x]++;
            }
        }
        return mx;
    }
};
