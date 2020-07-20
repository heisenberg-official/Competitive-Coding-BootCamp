#include<iostream>
#include<vector>

class Solution {
public:
    Solution()
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(NULL);
        std::cout.tie(NULL);
    }

    bool isValidSudoku(std::vector<std::vector<char>>& board)
    {
        int8_t x, SQR_IDX;
        std::vector<std::vector<int8_t>>
            ROW(9, std::vector<int8_t>(9, 0)),
            COL(9, std::vector<int8_t>(9, 0)),
            SQR(9, std::vector<int8_t>(9, 0));

        for (int8_t i = 0; i < board.size(); i++)
            for (int8_t u = 0; u < board.size(); u++)
                if (board[i][u] != '.')
                {
                    x = board[i][u] - '1';
                    SQR_IDX = (i / 3) * 3 + u / 3;

                    if (ROW[i][x] == 1 || COL[u][x] == 1 || SQR[SQR_IDX][x] == 1)
                        return false;

                    ROW[i][x] = COL[u][x] = SQR[SQR_IDX][x] = 1;
                }
        return true;
    }
};

int main()
{
    std::vector<std::vector<char>> BOARD
    {
        { '8', '3', '.', '.', '7', '.', '.', '.', '.' },
        { '6', '.', '.', '1', '9', '5', '.', '.', '.' },
        { '.', '9', '8', '.', '.', '.', '.', '6', '.' },
        { '8', '.', '.', '.', '6', '.', '.', '.', '3' },
        { '4', '.', '.', '8', '.', '3', '.', '.', '1' },
        { '7', '.', '.', '.', '2', '.', '.', '.', '6' },
        { '.', '6', '.', '.', '.', '.', '2', '8', '.' },
        { '.', '.', '.', '4', '1', '9', '.', '.', '5' },
        { '.', '.', '.', '.', '8', '.', '.', '7', '9' }
    };

    Solution A;
    std::cout<<A.isValidSudoku(BOARD);
    return 0;
}
