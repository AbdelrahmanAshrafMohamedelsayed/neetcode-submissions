class Solution {
public:
    int characterReplacement(string s, int k) {
        int mx=0;
        unordered_map<char,int>mp;
        int l=0;
        for(int r=0; r<s.size(); r++){
            mp[s[r]]++;
            int maxf=0;
            for( auto it:mp){
                maxf=max(it.second,maxf);
            }
            // int currlen=r-l+1;
            while((r-l+1)-maxf>k){
                 mp[s[l++]]--;
                for( auto it:mp){
                    maxf=max(it.second,maxf);
            }
            }
            mx=max((r-l+1),mx);
        }
        return mx;
       
    }
};

