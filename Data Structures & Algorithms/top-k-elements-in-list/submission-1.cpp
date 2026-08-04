class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        // Store the frequency in a hashmap
        for (int i : nums){
            map[i]++;
        }
        // Create buckets
        vector<vector<int>> freq(nums.size() + 1);
        // Store numbers at frequency indices
        for (const auto& pair : map){
            freq[pair.second].push_back(pair.first);
        }

        vector<int> result;
        for (int i = freq.size()-1; i >= 0; --i){
            for (int v : freq[i]){
                result.push_back(v);
                if (result.size() == k){
                    return result;
                }
            }
        }
        return result;

    }
};
