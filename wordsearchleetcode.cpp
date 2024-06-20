class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(backtrack(board,word,i,j,0))return true;
                
            }
        }return false;
    }
  bool  backtrack(vector<vector<char>>&board,string &word,int i,int j,int k)
    {int n=board.size();
    int m=board[0].size();
    if(k==word.length())return true;//If length of word is equal to k which means we were able to iterate whole word
    if(i<0||i>=n||j<0||j>=m||board[i][j]!=word[k])return false;//basic termination condition
    char temp=board[i][j];
    board[i][j]='!';//We put here some other character so we can say we came here and if we come here again the function should give me false.
    bool found=backtrack(board,word,i+1,j,k+1)|backtrack(board,word,i-1,j,k+1)|backtrack(board,word,i,j+1,k+1)|backtrack(board,word,i,j-1,k+1);
    board[i][j]=temp;//reassigning the value.
    return found;
    }

};
