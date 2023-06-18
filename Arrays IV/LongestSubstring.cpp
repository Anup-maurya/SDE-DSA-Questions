// 3. Longest Substring Without Repeating Characters 
// Given a string s, find the length of the longest substring without repeating characters.

class Solution {
public:
    int lengthOfLongestSubstring(string s) {     
  if (s.empty())
            return 0;
            
        int maxans = 0;
        for (int i = 0; i < s.length(); i++) {
            std::unordered_set<char> set;
            for (int j = i; j < s.length(); j++) {
                if (set.find(s[j]) != set.end()) {
                    maxans = std::max(maxans, j - i);
                    break;
                }
                set.insert(s[j]);
                maxans = std::max(maxans, j - i + 1);
            }
        }
        return maxans;
    }
};