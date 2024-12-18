class Solution {
public:
    bool solve(vector<vector<char>>& board) {
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board[0].size(); j++) {
                if (board[i][j] == '.') {
                    for (char k = '1'; k <= '9'; k++) {
                        if (isValid(i, j, k, board)) {
                            board[i][j] = k;
                            if (solve(board)) {
                                return true;
                            } else {
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false; 
                }
            }
        }
        return true; 
    }

    bool isValid(int r, int c, char digit, vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            if (board[r][i] == digit) return false;
            if (board[i][c] == digit) return false;
            int subRow = 3 * (r / 3) + i / 3;
            int subCol = 3 * (c / 3) + i % 3;
            if (board[subRow][subCol] == digit) 
            return false;
        }
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};
