class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s(nums.begin(),nums.end());
        if(s.size()==0){
            return 0;
        }
        int mx=0, currlen=1, i=0,firstel=*s.begin();
        for( int el:s){
            if(i++){
                if(el==firstel+1){
                    currlen++;
                }
                else{
                mx=max(mx,currlen);
                currlen=1;

                }
                firstel=el;
            }
        }
        mx=max(mx,currlen);
        return mx;
    }
};



