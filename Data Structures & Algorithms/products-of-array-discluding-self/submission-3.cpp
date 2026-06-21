class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size());
        int prod=1;
        int zeroNum=0;
        int prodWithoutZero=1;
        for(int num:nums){
            if(num!=0){
            
            prodWithoutZero*=num;
            }
            else{
                zeroNum++;
            }
            prod*=num;
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0&&zeroNum==1){
                res[i]=prodWithoutZero;
            }
            else if(nums[i]==0&&zeroNum>1){
                res[i]=0;
            }
            else
            res[i]=prod/nums[i];
        }
    return res;
    }
};

