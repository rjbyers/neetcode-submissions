class Solution {
public:
    bool isAnagram(string s, string t) {
        // Anagrams have the same number of letters
        if (s.size() != t.size()) return false;
        // add letters to hashmap
        unordered_map<char, int> map;
        for (int i = 0; i < s.size(); i++){
            map[s[i]]++;
            map[t[i]]--;
            if (map[t[i]] == 0) map.erase(t[i]);
            if (map[s[i]] == 0) map.erase(s[i]);
        }
        return map.empty();
    }
};
