class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
    for(int i=0; i<numbers.size(); i++){
        int curr =numbers[i];
        int wanted = target- curr;
        int l= i+1, r= numbers.size()-1;
        while(l<=r){
            int mid =(l+(r-l)/2);
            if(numbers[mid]>wanted){
                r=mid-1;
            }
            else if(numbers[mid]<wanted){
                l=mid+1;
            }
            else {
                return {i+1, mid+1};
            }
        }
    }
    return {};
    }
};
