class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // create frequency map
        unordered_map<int, int> freq;
        for (int& num : nums){
            freq[num]++;
        }

        // Create buckets
        int n = nums.size();
        vector<vector<int>> buckets(n+1);

        // Fill buckets with numbers using frequency as index
        for (auto& pair : freq){
            int num = pair.first;
            int frequency = pair.second;
            buckets[frequency].push_back(num);
        }

        // In reverse order of frequency, fill answer vector with numbers
        vector<int> answer;
        for (int i = n; i >= 1; i--){
            for (int num : buckets[i]){
                answer.push_back(num);
                // If we have k elements, return
                if (answer.size() == k) {
                    return answer;
                }
            }
        }
        return answer;
    }
};
