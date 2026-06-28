class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k= s1.size();
        sort(s1.begin(),s1.end());
        int l=0;
        int l2= s2.size();
        for(int r=k-1; r<l2; r++){
            l=r-k+1;
            string s3= s2.substr(l, k);
            sort(s3.begin(),s3.end());
            if(s1==s3)
            return true;

        }
        return false;
    }
};
