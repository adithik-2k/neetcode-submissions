class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        bool result=true;
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[i].size();j++)
            {
                char ele=board[i][j];
                for(int k=0;k<board[i].size();k++)
                {
                    if((ele==board[i][k]) && (k!=j) && (ele!=46))
                    {
                        result=false;
                    }
                    else if((ele==board[k][j]) && (k!=i) && (ele!=46))
                    {
                        result=false;
                    }
                    
                }
                int startrow=(i/3)*3;
                int startcol=(j/3)*3;
                
                for(int r=startrow;r<startrow+3;r++)
                {
                    for(int c=startcol;c<startcol+3;c++)
                    {
                        if((ele==board[r][c]) && (ele!='.') && ((i!=r) || (j!=c)))
                        {
                            result=false;
                        }
                    }
                }
                
            }
        }
        return result;
    }
};
