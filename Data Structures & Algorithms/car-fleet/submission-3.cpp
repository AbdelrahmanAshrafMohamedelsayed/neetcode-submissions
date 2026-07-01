class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n= position.size();
        vector<pair<int,int>>cars(n);
        vector<double>times;
        stack<double>s;
        for(int i=0; i<n; i++){
            cars[i]={position[i],speed[i]};
        }
        sort(cars.begin(),cars.end());
        
        for(int i=0; i<n; i++){
            if(cars[i].second==0){
                continue;
            }
            times.push_back((double)(target-cars[i].first)/cars[i].second);
        }
        for(int i=n-1; i>=0; i--){
            if (s.empty() || times[i] > s.top()) {
                s.push(times[i]);
            }

        }
        return s.size();
    }
};
