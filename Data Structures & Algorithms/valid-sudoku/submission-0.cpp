class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_set<int>>cols;
        unordered_map<int,unordered_set<int>>rows;
        map<pair<int,int>,unordered_set<int>>box;
        for(int r =0; r<9;r++){
            for(int c =0; c<9;c++){
                if(board[r][c]=='.'){
                    continue;
                }
                int el= board[r][c];
                pair<int,int> box_index={r/3,c/3};
                if(cols[c].count(el)||rows[r].count(el)||box[box_index].count(el))
                return false;
                cols[c].insert(el);
                rows[r].insert(el);
                box[box_index].insert(el);
            }
        }
        return true;
    }
};
