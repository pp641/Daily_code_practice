#include<iostream>
#include<vector>
using namespace std;


bool isSafe(int row , int col , vector<string>board , int n ){

    int i ,j;
    for( i =  0; i < col ;i++){
        if(board[row][i])
            return false;
    }

    for( i = row , j= col ; i < row && j < col ;i++,j--){
        if(board[i][j])
            return false;
    }

    for(  i = row, j=col ; i >=0 && j >= 0 ; i--,j-- ){
        if(board[i][j])
            return false;
    }

    return true;
}


void solve(int col  , vector<string>&board , vector<vector<string>>&answer , int n ){


    for( int row = 0; row< n ; row++){
        if(isSafe(col , row, board , n )){
            board[row][col] = 'Q';
            solve(col+1,board,answer,n);
            board[row][col] = '.';
        }

    }

}

vector<vector<string>> getNQueens(int n){

    vector<vector< string >> ans;
    vector<string>board(n);
    string s(n,'.');
    for( int i =0; i < n;  i++){
        board[i] = s;
    }
    solve(0, board , ans , n);
    return ans;
}


int main(){


    return 0;
}