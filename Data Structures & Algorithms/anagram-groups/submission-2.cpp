class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagrams;
        unordered_map<string, vector<string>> map;
        for (string s : strs){
            vector<int> key(26, 0);
            for (char c : s){
                key[c-'a']++;
            }
            string keyString = "";
            for (char c : key){
                keyString += c;
            }
            map[keyString].push_back(s);
        }
        for (auto& pair : map){
            anagrams.push_back(pair.second);
        }
        return anagrams;
    }
};
