class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    int l=0 , r= numbers.size()-1;
    while(l<r){
        int res1= numbers[l]+numbers[r];
        if(res1>target){
            r--;
        }
        else if(res1<target){
            l++;
        }
        else{
            return {l+1, r+1};
        }
    }
    }
};
