class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<pair<int,int>>s;
        vector<int>res(temperatures.size());
        for(int i=temperatures.size()-1; i>=0;i--){
            while(!s.empty()&&s.top().first<=temperatures[i]){
                s.pop();
            }
            if(!s.empty())
            {
                res[i]=abs(s.top().second-i);
            }
            s.push({temperatures[i],i});
        }
        return res;
    }
};
