#include <iostream>

#include <iomanip>
#include <vector>
#include <cstring>

using namespace std;
struct HNT{
    int src,des;
};
int Fibo(int n){
    if (n<2) return 1;
    else return Fibo(n-1)+Fibo(n-2);
}
void HanoiTowerMove(int N, int src, int des, int inter, int &nStep,  HNT* ret){
    if (N<2){
        //cout << "move from " << src << " to " << des << endl;
        ret[nStep] = {src,des};
        nStep++;
    } else{
        HanoiTowerMove(N-1, src, inter, des, nStep,ret);
        HanoiTowerMove(1,src,des,-1, nStep,ret);
        HanoiTowerMove(N-1,inter,des,src, nStep,ret);
    }
}
struct chessBoard{
    int N;
    int B[100][100];
};

void KnightMove(chessBoard& b, int row, int col, vector<chessBoard>& ret){
    if (b.B[row][col] == b.N* b.N){
        ret.push_back(b);
        return; // found
    }
    static  struct {int drow, dcol;}
    d[]= {-2,1,-1,2,1,2,2,1,2,-1,1,-2,-1,-2,-2,-1};
    for (int i = 0; i < 8; ++i) {
        int newrow = row + d[i].drow;
        int newcol = col + d[i].dcol;
        if (newcol < 0 || newrow >=b.N || newcol < 0 || newcol >=b.N) continue;
        if (b.B[newrow][newcol]) continue;
        b.B[newrow][newcol] = b.B[row][col] + 1;//new move
        if (KnightMove(b, newrow,newcol, ret)){
            return;
        }
        else{
            b.B[newrow][newcol] = 0;//backtrack
        }
    }
};
void print(chessBoard &b){
    for (int i = 0; i < b.N; i++) {
        for (int j = 0; j < b.N; j++) {
            cout << setw(5) << b.B[i][j];
            cout << endl;
        }
    }
    cout << "-------------------------------";
}
int main() {

    int n;
    int nMove=0;
    int row,col;
    cin >> n >> row >> col;
    /*HNT ret[1<<(n+1)];
    cin >> n;
    HanoiTowerMove(n,1,3,2,nMove,ret); cout <<'\n';
    cout << nMove;*/
    chessBoard board;
    memset(&board,0,sizeof(chessBoard));
    board.N=0;
    board.B[row][col]=1;
    if (KnightMove(board,row,col)) {
        cout << "found"<<'\n';
        print(board);
    }
    else cout << "no sol";

    return 0;
}
