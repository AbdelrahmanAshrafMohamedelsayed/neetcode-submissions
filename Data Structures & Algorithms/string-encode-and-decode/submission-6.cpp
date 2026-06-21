class Solution {
public:

    string encode(vector<string>& strs) {
        string res="";
        for(int i=0; i<strs.size(); i++){
            res+=to_string(strs[i].size());
            res+='#';
            res+=strs[i];
                
        }
        return res;
    }

    vector<string> decode(string s) {
        cout<<s;
        vector<string> res;
        int i=0;
        while(i<s.size()){
                string len= "";
                while(i<s.size()&&s[i]!='#')
                    len+=s[i++];
                int step=stoi(len);
                res.push_back(s.substr(i+1, step));
                i+=step+1;
        }        
        return res;
    }
};
