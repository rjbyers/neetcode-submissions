class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lowest = INT_MAX;
        int selling = 0;
        for (int num : prices){
            lowest = min(lowest, num);
            selling = max(selling, num - lowest);
        }
        return selling;
    }
};
