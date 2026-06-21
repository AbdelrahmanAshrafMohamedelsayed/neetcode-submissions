class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        unordered_map<int,int>mp;
        int mx=0;
        for(int x:s){
            int i=0;
                while(s.count(x-i)==1){
                    mp[x]++;
                    i++;
                }
                if(s.count(x-i)>1){
                    mp[x]+=mp[x-1];
                }
                mx=max(mx,mp[x]);
                
        }
        return mx;
    }
};
