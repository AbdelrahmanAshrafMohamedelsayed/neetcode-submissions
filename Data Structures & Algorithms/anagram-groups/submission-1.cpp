class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> s;
        unordered_map<string, vector<string>>mp;
        for( string str:strs){
            string sorted_s = str;
            sort(sorted_s.begin(), sorted_s.end());
            mp[sorted_s].push_back(str);

        }
        for( auto it: mp){
            vector<string> sub1;
            for(string s : it.second){
                sub1.push_back(s);
            }
            s.push_back(sub1);
        }
        return s;
    }
};