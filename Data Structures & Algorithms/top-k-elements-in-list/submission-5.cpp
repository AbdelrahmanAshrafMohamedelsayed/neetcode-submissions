class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> v;
        vector<pair<int,int>> ve;
        map<int,int>mp;
        for(int num:nums){
            mp[num]++;
        }
        for(auto it:mp){
            ve.push_back({it.second,it.first});
        }
        sort(ve.rbegin(),ve.rend());
        for(int i=0; i<k; i++){
            v.push_back(ve[i].second);
        }
        return v;
    }
};
