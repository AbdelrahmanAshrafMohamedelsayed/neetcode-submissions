class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0, mx=0, curr=0;
        for(int r=1; r<prices.size(); r++){
                curr= prices[r]-prices[l];
                mx=max(mx, curr);
                if(prices[l]>prices[r]){
                    l=r;
                }

        }
        return mx;
    }
};
// 10 , 8 , 7 , 5 , 2
// l    r -2

// 10 , 8 , 7 , 5 , 2
//      l   r -1

// 10 , 8 , 7 , 5 , 2
//          l   r -2
// 10 , 8 , 7 , 5 , 2
//          l   r -2