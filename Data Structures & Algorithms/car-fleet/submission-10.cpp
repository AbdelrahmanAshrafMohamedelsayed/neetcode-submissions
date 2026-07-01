class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n= position.size();
        vector<pair<int,int>>cars(n);
        vector<double>times;
        // stack<double>s;
        int fleet=1;
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
        // if(times.size()==1)
        //     return 1;
        double  prevtime=times[n-1];
        for(int i=n-2; i>=0; i--){
            if (prevtime<times[i]) {
                prevtime=times[i];
                fleet++;
            }

        }
        return fleet;
    }
};
