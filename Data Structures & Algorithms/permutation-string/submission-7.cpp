class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.size();

        if (k > s2.size())
            return false;

        vector<int> freq1(26, 0), freq2(26, 0);

        for (int i = 0; i < k; i++) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        int matches = 0;
        for (int i = 0; i < 26; i++)
            if (freq1[i] == freq2[i])
                matches++;

        for (int r = k; r < s2.size(); r++) {
            if (matches == 26)
                return true;

            int add = s2[r] - 'a';
            int rem = s2[r - k] - 'a';

            // Add new character
            // if it was contribute in the match then it will be reduced
            if (freq1[add] == freq2[add]) matches--;
            freq2[add]++;
            // if we make new match 
            if (freq1[add] == freq2[add]) matches++;

            // Remove old character
            if (freq1[rem] == freq2[rem]) matches--;
            freq2[rem]--;
            if (freq1[rem] == freq2[rem]) matches++;
        }

        return matches == 26;
    }
};