class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k= s1.size();
        int l=0;
        map<char,int>mp1;
        map<char,int>mp2;

        for(int i=0;i<k; i++){
             mp1[s1[i]]++;
             mp2[s2[i]]++;
        }
        if(mp1==mp2){
            return true;
        }
        for(int r=k;r<s2.size(); r++){
            mp2[s2[r]]++;
            mp2[s2[r-k]]--;
            if(mp2[s2[r-k]] == 0)
                mp2.erase(s2[r-k]);
            if(mp1==mp2){
                return true;
            }
        }
        return false;
    }
};
