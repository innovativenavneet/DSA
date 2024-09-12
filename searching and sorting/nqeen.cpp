#include<iostream>
using namespace std;
void print(int board[n][n]){
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            if (board[i][j])
            cout<< "Q";
            else cout<<" . ";
         }
    
}
}

bool issafe(int board[4][4], int row, int col, int n){
    for (int i = 0; i < col; ++i) {
        if (board[row][i]) {
            return false;
        }
    }

    // Check upper diagonal on the left side
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j) {
        if (board[i][j]) {
            return false;
        }
    }

    // Check lower diagonal on the left side
    for (int i = row, j = col; i < N && j >= 0; ++i, --j) {
        if (board[i][j]) {
            return false;
        }
    }

    return true;

}

bool nQueen(int board[4][4], int row, int col,int n){
    if(row==n) return true;
    for(int col=0; col<n; col++){
        if(issafe(board,row,col,n)){
            board[row][col]=1;
            if(nQueen(board,row+1))
            return true;
            board[row][col]=0;
        }
    }
    return false;
}
int main() {
    int N;
    cout << "Enter the number of queens (N): ";
    cin >> N;

    int Board()

    if (!nQueen(board, 0, N)) {
        cout << "No solution exists." << endl;
    }

    return 0;
}
