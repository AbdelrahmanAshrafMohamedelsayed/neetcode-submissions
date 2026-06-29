class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for( string s: tokens){
            if (s != "+" && s != "-" && s != "*" && s != "/"){
                st.push(stoi(s));
            }
            else {
                int f= st.top();
                st.pop();
                int sec= st.top();
                st.pop();
                if(s=="+"){
                    st.push(f+sec);
                }
                else if(s=="-"){
                    st.push(sec-f);
                }
                else if(s=="*"){
                    st.push(sec*f);
                }
                else if(s=="/"){
                    st.push(sec/f);
                }
            }
        }
        return st.top();
    }
};

