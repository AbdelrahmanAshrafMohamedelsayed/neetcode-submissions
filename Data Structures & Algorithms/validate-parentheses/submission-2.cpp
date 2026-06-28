class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
        unordered_map<char,char>mp={
            {')','('},
            {'}','{'},
            {']','['},
        };
        for(char ch:s){
            if(ch=='('||ch=='{'||ch=='['){
                st.push(ch);
            }
            else if(ch==')'||ch=='}'||ch==']'){
                if(st.empty()||mp[ch]!=st.top())
                    return false;
                st.pop();
            }
        }
        return st.size()==0;
    }
};



