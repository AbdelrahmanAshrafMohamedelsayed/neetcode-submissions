class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(),1);
        vector<int> prefix(nums.size()+1,1);
        vector<int> posfix(nums.size()+1,1);
        for(int i=1; i<prefix.size(); i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }
        for(int i=posfix.size()-2; i>=0; i--){
            posfix[i]=posfix[i+1]*nums[i];
        }
        for(int i=0; i<nums.size(); i++){
            output[i]=prefix[i]*posfix[i+1];
        }
        for(int i=0; i<nums.size()+1; i++){
           cout<<prefix[i]<<" ";
        }
        return output;
    }
};

