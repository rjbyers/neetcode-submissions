class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int maxCount = 0;
        for (int i = 0; i < nums.size(); i++){
            int prev = nums[i] - 1;
            if (!numSet.count(prev)){
                int count = 1;
                int next = nums[i] + 1;
                while (numSet.count(next)){
                    count++;
                    next++;
                }
                maxCount = max(maxCount, count);
            }
        }
        return maxCount;
    }
};
