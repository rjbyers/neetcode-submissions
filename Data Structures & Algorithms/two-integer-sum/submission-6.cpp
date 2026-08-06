class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map;
        // Store the index of each occurrence in a hashmap.
        for (int i = 0; i < nums.size(); i++){
            // If the complement is in the hashmap, return the indices
            if (map.count(target - nums[i]) > 0){
                return {map[target - nums[i]], i};
            }
            // If not, add it to the hashmap
            map[nums[i]] = i;
        }
        return {};
    }
};
