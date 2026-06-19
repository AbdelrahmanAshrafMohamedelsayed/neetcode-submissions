class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int i=0; i<numbers.size(); i++){
        int pos2 = lower_bound(numbers.begin()+i+1, numbers.end(), target-numbers[i]) - numbers.begin();
        if (pos2 < numbers.size() && numbers[pos2] == target-numbers[i]) {
            return {i+1, pos2+1};
        }
        }
    }
};
