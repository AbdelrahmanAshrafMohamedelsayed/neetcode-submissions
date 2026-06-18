class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>res(k);
        vector<pair<int,int>>tr;
        unordered_map<int,int>mp;
        for( int num : nums){
            mp[num]++;
        }
        for( auto it : mp){
            tr.push_back({it.second,it.first});
        }
        sort(tr.rbegin(), tr.rend());
       for(int i=0; i<k; i++){
            res[i]=tr[i].second;
        }
        return res;
    }
};
