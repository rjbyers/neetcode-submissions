class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> anagrams;
        unordered_map<string, vector<string>> map;
        for (string s : strs){
            // Create a frequency map
            vector<int> freq(26, 0);
            for (char c : s){
                freq[c - 'a']++;
            }
            // Convert the frequency map to a string
            string key = "";
            for (int i : freq){
                key += to_string(i) + ".";
            }
            // Use the frequency map as a key, and the word as the value. Append to result.
            map[key].push_back(s);
        }
        for (const auto& pair : map){
            anagrams.push_back(pair.second);
        }
        return anagrams;
    }
};
