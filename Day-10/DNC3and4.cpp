//N-queen problem
#include<iostream>
#include<vector>
using namespace std;
void printboard(vector<vector<char>> &board,int q){
    for(int i=0;i<q;i++){
        for(int j=0;j<q;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool issafe(int row,int col,vector<vector<char>> &board,int q){
    //checking back
    for(int i=row,j=col;j>=0;j--){
        if(board[i][j]=='q'){
            return false;
        }
    }
    //checking up back
    for(int i=row,j=col;i>=0&&j>=0;i--,j--){
        if(board[i][j]=='q'){
            return false;
        }
    }
    //checking down back
    for(int i=row,j=col;i<q&&j>=0;i++,j--){
        if(board[i][j]=='q'){
            return false;
        }
    }
    //there is no queen then it good to go
    return true;
}
void solve(vector<vector<char>> &board,int col,int q){
    //base case
    if(col>=q){
        printboard(board,q);
        cout<<endl;
        return ;
    }
    //first case
    for(int row=0;row<q;row++){
        if(issafe(row,col,board,q)){
            board[row][col]='q';
            solve(board,col+1,q);
            //backtrack
            board[row][col]='-';
        }
    }

}
int main()
{
    int q=4;
    vector<vector<char>> board(q,vector<char>(q,'-'));
    int col=0;
    solve(board,col,q);
    
    return 0;
}