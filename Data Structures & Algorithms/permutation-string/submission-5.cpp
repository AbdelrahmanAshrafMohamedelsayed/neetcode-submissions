class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k= s1.size();
        if (k > s2.size())
            return false;
        vector<int> freq1(26, 0), freq2(26, 0);
        for(int i=0;i<k; i++){
             freq1[s1[i]-'a']++;
             freq2[s2[i]-'a']++;
        }
        if(freq1==freq2){
            return true;
        }
        for(int r=k;r<s2.size(); r++){
            freq2[s2[r]-'a']++;
            freq2[s2[r-k]-'a']--;
            if(freq1==freq2){
                return true;
            }
        }
        return false;
    }
};
