class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // two pointers?
        int k = 0; 
        for (int i = 0; i < nums.size(); i++){
            // replace numbers as we go
            if (nums[i] != val){
                nums[k++] = nums[i];
            }
        }
        return k;
    }
};