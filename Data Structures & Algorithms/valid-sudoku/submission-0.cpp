class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> row(9);
        vector<unordered_set<char>> col(9);
        vector<unordered_set<char>> box(9);

        for(int r=0; r<9; r++)
        {
            for(int c=0; c<9; c++)
            {
                int num = board[r][c];

                if(num == '.')
                {
                    continue;
                }

                int boxes = (r/3)*3+(c/3);

                if(row[r].count(num) || col[c].count(num) || box[boxes].count(num))
                {
                    return false;
                }

                row[r].insert(num);
                col[c].insert(num);
                box[boxes].insert(num);
            }
        }
        return true;
    }
};
