class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size(), 1);
        output[0] = 1;
        for (int i = 1; i < nums.size(); i++){
            //prefix
            output[i] = nums[i - 1] * output[i - 1];
        }
            // postfix
        int postfix = 1;
        for (int i = nums.size() - 1; i >= 0; i--){
            output[i] *= postfix;
            postfix *= nums[i];
        }
        return output;
    }
};
