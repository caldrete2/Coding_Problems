class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> data;
        int x = 0;
        int ans = 0;
        
        for(int i=0; i<s.length(); i++) {
            char c = s[i];
            if(data.count(c) != 0) {
                x = (x > data[c]? x : data[c]);        
            }
            ans = (ans > i - x + 1? ans : i - x + 1);
            data[c] = i + 1;
        }
        return ans;   
    }
};
