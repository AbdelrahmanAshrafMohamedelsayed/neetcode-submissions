class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>s;
        vector<int>res(temperatures.size());
        for(int i=0; i<temperatures.size();i++){
            while(!s.empty()&&s.top().first<temperatures[i]){
                res[s.top().second]=(-s.top().second+i);
                s.pop();
            }
     
            s.push({temperatures[i],i});
        }
        return res;
    }
};
