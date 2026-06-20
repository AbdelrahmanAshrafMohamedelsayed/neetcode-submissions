class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> s;
        unordered_map<string, vector<string>>mp;
        for( string s: strs){
            string sort_num=s;
            sort(sort_num.begin(),sort_num.end());
            mp[sort_num].push_back(s);
        }
        for(auto it: mp){
            s.push_back(it.second);
        }
        return s;
    }
};