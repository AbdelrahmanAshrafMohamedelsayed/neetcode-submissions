class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> s;
        map<vector<int>, vector<string>>mp;
        for( string s: strs){
            // calc the freq array
            vector<int>freq(26);
            for(char c:s){
                freq[c-'a']++;
            }
            mp[freq].push_back(s);
        }
        for(auto it: mp){
            s.push_back(it.second);
        }
        return s;
    }
};