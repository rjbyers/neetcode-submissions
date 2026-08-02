class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9);
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> square(9);
        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                char val = board[i][j];
                if (val == '.') continue;

                if (row[i].count(val) || col[j].count(val) || square[findSquare(i,j)].count(val)){
                    return false;
                }
                row[i].insert(val);
                col[j].insert(val);
                square[findSquare(i,j)].insert(val);
            }
        }
        return true;
    }

    int findSquare(int x, int y){
        return (x/3) * 3 + (y/3);
    }
};
