class Solution {
public:
    bool isAnagram(string s, string t) {
        // Anagrams have the same number of characters
        if (s.size() != t.size()) return false;
        // Letter bank
        unordered_map<char, int> map;
        // Iterate
        for (char c : s){
            map[c]++;
        }
        for (char c : t){
            map[c]--;
            if (map[c] == 0){
                map.erase(c);
            }
        }
        return (map.size() == 0);
    }
};
