class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> map;
        for (char c : s){
            map[c]++;
        }
        int count = s.size();

        for (int i = 0; i < t.size(); i++){
            char c = t[i];
            if (map.count(c) > 0){
                map[c]--;
                if (map[c] >= 0){
                    count--;
                }
            }
        }
        return (count == 0);
    }
};
