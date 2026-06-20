class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n= nums.size();
        vector<int> v;
        unordered_map<int,int>mp;
        vector<vector<int>> freq(n+1);

        for(int num:nums){
            mp[num]++;
        }
        for(auto it:mp){
            freq[it.second].push_back(it.first);
        }
        for(int i=freq.size()-1; i>=0; i--){
            for(int num: freq[i]){
                v.push_back(num);
                if(v.size()==k){
                    return v;
                }
            }
        }
        return v;
    }
};
