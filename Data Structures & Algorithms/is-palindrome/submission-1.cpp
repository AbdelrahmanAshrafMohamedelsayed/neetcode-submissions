class Solution {
public:
    bool isPalindrome(string s) {
        string s2="";
        for( char c:s){
            if(isalpha(c) || isdigit(c)){
                s2+=tolower(c);
            }
        }
    int l= 0;
    int r=(int)s2.size()-1;
    cout<<s2;
    while(l<r){
        if(s2[l]!=s2[r]){
            return false;
        }
        l++;
        r--;
    }
    return true;
    }
};
