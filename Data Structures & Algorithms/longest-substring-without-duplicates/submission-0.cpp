class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>repeated;
        int mx=0, curr=0, l=0, r=0;
        while(r<s.size()){
            while(repeated.count(s[r])){
                repeated.erase(s[l++]);
            }
            mx=max(mx,r-l+1);
            repeated.insert(s[r]);
            r++;
        }
        return mx;
    }
};
// curr= r-l+1
// z x y z x y z
// z l=0 r=0 count(s[r]=0) 
// z x l=0 r=1 count(s[r]=0) 
// z x y l=0 r=2 

// z x y z l=0 r=3 count(s[r]=1) 
// mx=max(mx, curr)
//  while(count(s[r]=1) )
//  s.erase(s[l++]) r=3 l=1 count(s[r]=0) 
//  insert s[r]
//  mx-> update
// x y z x r=4 l=1