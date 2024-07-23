class Solution {
public:

vector<pair<int,int>> moves={{0,-1},{0,1},{-1,0},{1,0},{-1,-1},{-1,1},{1,1},{1,-1}};

bool isValidStep(int x, int y, int n, int m){
    if(x>=0 and x<n and y>=0 and y<m) return true;
    else return false;
}

    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        vector<vector<int>> dupli(n,vector<int> (m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==0){
                    int countOfOnes=0;
                    for(auto p:moves){
                        int nX=i+p.first;
                        int nY=j+p.second;
                        if(isValidStep(nX,nY,n,m)){
                            if(board[nX][nY]==1) countOfOnes++;
                        }
                    }
                    if(countOfOnes==3) dupli[i][j]=1;
                }
                else{
                    int countOfOnes=0;
                    for(auto p:moves){
                        int nX=i+p.first;
                        int nY=j+p.second;
                        if(isValidStep(nX,nY,n,m)){
                            if(board[nX][nY]==1) countOfOnes++;
                        }
                    }
                    if(countOfOnes<2 or countOfOnes>3) dupli[i][j]=0;
                    else{
                        dupli[i][j]=1;
                    }
                }
            }
        }
        board=dupli;
    }
};