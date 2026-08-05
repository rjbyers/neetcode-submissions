class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Brute Force Solution
        for (int i = 0; i < nums.size(); i++){
            for (int j = i; j < nums.size(); j++){
                if (nums[i] == nums[j] && j != i) return true;
            }
        }
        return false;
    }
};