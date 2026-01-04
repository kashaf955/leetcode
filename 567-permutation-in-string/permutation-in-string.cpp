class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int s1size = s1.length(), s2size = s2.length();
        if(s1size > s2size) return false;

        vector<int> s1count(26), s2count(26);

        // Initialize the first window
        for(int i = 0; i < s1size; i++){
            s1count[s1[i] - 'a']++;
            s2count[s2[i] - 'a']++;
        }

        // Slide the window across s2
        for(int i = s1size; i < s2size; i++){
            if(s1count == s2count){
                return true;
            }
            // Add current character to window
            s2count[s2[i] - 'a']++;
            // Remove the character that is no longer in the window
            s2count[s2[i - s1size] - 'a']--;
        }

        // Check the last window
        return s1count == s2count;
    }
};