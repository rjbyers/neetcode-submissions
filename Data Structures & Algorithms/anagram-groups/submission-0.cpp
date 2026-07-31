class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Vector to hold all the vectors of anagrams
        vector<vector<string>> answer;
        // Hashmap to hold the frequency strings and the index for the answer string
        unordered_map<string, vector<string>> map;
        // Index to store inside the hashmap, incremented when a new anagram is found
        int anagramIndex = 0;

        // iterate over every string
        for (string s : strs){
            // Vector for containing letter frequencies
            vector<int> freq (26,0);
            // Key for unordered map
            // Iterate over every letter, add it to frequency vector
            for (char c : s){
                freq[c - 'a']++;
            }
            // Convert freq vector to string, store in key
            string key = "";
            for (int count : freq){
                key += to_string(count) + "#";
            }
            // If the key is already inside the map, push back
            map[key].push_back(s);
        }
        for (auto& pair : map) {
            answer.push_back(pair.second);
        }
        return answer;
    }
};
