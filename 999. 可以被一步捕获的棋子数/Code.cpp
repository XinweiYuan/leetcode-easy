class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int rlt(0);
        int posX(-1), posY(-1); //the location of Rook
        for (int i = 0; i < 8; ++i) {    //find the location of Rook
            for (int j = 0; j < 8; ++j) {
                if (board[i][j] == 'R') {
                    posX = i;
                    posY = j;
                    break;
                }
                if (posX != -1)
                    break;
            }
        }
        for (int a = posY; a >= 0; --a) {  // search the left
            if (board[posX][a] == 'B')
                break;
            if (board[posX][a] == 'p') {
                ++rlt;
                break;
            }       
        }
        for (int a = posY; a < 8; ++a) {  // search the right
            if (board[posX][a] == 'B')
                break;
            if (board[posX][a] == 'p') {
                ++rlt;
                break;
            }       
        }
        for (int a = posX; a >= 0; --a) {  // search the up
            if (board[a][posY] == 'B')
                break;
            if (board[a][posY] == 'p') {
                ++rlt;
                break;
            }       
        }
        for (int a = posX; a < 8; ++a) {  // search the down
            if (board[a][posY] == 'B')
                break;
            if (board[a][posY] == 'p') {
                ++rlt;
                break;
            }       
        }
        return rlt;
    }
};
