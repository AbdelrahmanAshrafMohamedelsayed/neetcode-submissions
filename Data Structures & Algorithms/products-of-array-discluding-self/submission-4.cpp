class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(),1);
        // prefix
        int accprefix=1;
        for(int i=0; i<nums.size(); i++){
            accprefix*=nums[i];
            if(i+1<nums.size())
            output[i+1]=accprefix;
        }
        // postfix
        int accpostfix=1;
        for(int i=nums.size()-1; i>=0; i--){
            accpostfix*=nums[i];
            if(i-1>=0)
            output[i-1]*=accpostfix;
        }
        return output;
    }
};
// out[i+1]=prefix[i]
// prefix[i]=acc of mult
// 1 2 4 6
// 1 2 8 48 prefix output
// postfix
// 1  2   4   6
// 48 48  24  6
// 48 24  6   1
// out[i-1]=postfix[i]
// 1 1 2 8   
// -1 0 1 2 3
// -1 0 0 0 0
//  1 -1 0 0 0
