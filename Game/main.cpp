#include <iostream>

using namespace std;

struct State{
    int val;
    int x;
    int y;
    State(int val, int x, int y){this->val = val; this->x = x; this->y = y;}
};

int Jugde(int pla, int n,int s_x, int s_y, int step ,int**map){
    //cout << "Judging... " << endl;
    int c_num;
    if(n < 5) c_num = 3;
    else c_num = 5;
    int count = 0;
    int x = s_x - 1; int y = s_y - 1;
    //cout << x << " " << y << endl;
    int left, right, up, down;
    // SET LEFT
    for(int i = c_num - 1; i  > -1 ; i--){
        if(y - i >= 0){
            left = y - i;
            break;
        }
    }
    // SET RIGHT
    for(int i = c_num - 1; i  > -1 ; i--){
        //cout << i << " ";
        if(y + i < n){
            //cout << " " << y + i << " ";
            right = y + i;
            break;
        }
    }
    //cout << endl << right << endl;

    // SET UP
    for(int i = c_num - 1; i  > -1 ; i--){
        if(x - i >= 0){
            up = x - i;
            break;
        }
    }
    // SET DOWN
    for(int i = c_num - 1; i  > -1 ; i--){
        if(x + i < n){
            down = x + i;
            break;
        }
    }
    //cout << left << " " << right << " " << up << " " << down << endl;
    //out << "Check Row" << endl;
    for(int i = left; i <= right; i++){
        if(map[x][i] == pla)count++;
        else{
            count = 0;
        }
        if(count == c_num)return pla;
    }
    count = 0;
    // cout << "Check Col" << endl;
    for(int i = up; i <= down; i++){
        if(map[i][y] == pla)count++;
        else{
            count = 0;
        }

        if(count == c_num)return pla;
    }
    count = 0;

    //cout << "Check left down cross" << endl;
    for(int i = left, j = up; i <= right && j <= down; i++, j++){
        if(map[j][i] == pla)count++;
        else {

            count = 0;
        }

        if(count == c_num)return pla;
    }
    count = 0;

    //cout << "Check left up cross" << endl;
    for(int i = left, j = down; i <= right && j >= up; i++, j--){
        if(map[j][i] == pla)count++;
        else{
            count = 0;
        }

        if(count == c_num)return pla;
    }
    count = 0;

    // cout << "Check right up cross" << endl;
    for(int i = right, j = down; i >= left && j >= up; i--, j--){
        if(map[j][i] == pla)count++;
        else{
            count = 0;
        }

        if(count == c_num)return pla;
    }
    count = 0;

    //cout << "Check right down cross" << endl;
    for(int i = right, j = up; i >= left && j <= down; i--, j++){
        if(map[j][i] == pla)count++;
        else{
            count = 0;
        }

        if(count == c_num)return pla;
    }
    //cout << "Done" << endl;
    return 0;
}

bool end_game(int pla, int s_x, int s_y, int n, int step,int** map, bool& winner){
    int c_num;
    if(n < 5) c_num = 3;
    else c_num = 5;
    int count = 0;
    int x = s_x - 1; int y = s_y - 1;
    int left, right, up, down;
    // SET LEFT
    for(int i = c_num - 1; i  > -1 ; i--){
        if(y - i >= 0){
            left = y - i;
            break;
        }
    }
    // SET RIGHT
    for(int i = c_num - 1; i  > -1 ; i--){
        if(y + i < n){
            right = y + i;
            break;
        }
    }

    // SET UP
    for(int i = c_num - 1; i  > -1 ; i--){
        if(x - i >= 0){
            up = x - i;
            break;
        }
    }
    // SET DOWN
    for(int i = c_num - 1; i  > -1 ; i--){
        if(x + i < n){
            down = x + i;
            break;
        }
    }

    //Check Row
    for(int i = left; i <= right; i++){
        if(map[x][i] == pla)count++;
        else count = 0;
        if(count == c_num) {
            winner = true;
            return true;
        }
    }
    count = 0;
    //Check Col
    for(int i = up; i <= down; i++){
        if(map[i][y] == pla)count++;
        else count = 0;
        if(count == c_num){
            winner = true;
            return true;
        }
    }
    count = 0;

    //Check left down cross
    for(int i = left, j = up; i <= right && j <= down; i++, j++){
        if(map[j][i] == pla)count++;
        else count = 0;
        if(count == c_num) {
            winner = true;
            return true;
        }
    }
    count = 0;

    //Check left up cross
    for(int i = left, j = down; i <= right && j >= up; i++, j--){
        if(map[j][i] == pla)count++;
        else count = 0;
        if(count == c_num) {
            winner = true;
            return true;
        }
    }
    count = 0;

    //Check right up cross
    for(int i = right, j = down; i >= left && j >= up; i--, j--){
        if(map[j][i] == pla)count++;
        else count = 0;
        if(count == c_num){
            winner = true;
            return true;
        }
    }
    count = 0;

    //Check right down cross
    for(int i = right, j = up; i >= left && j <= down; i--, j++){
        if(map[j][i] == pla)count++;
        else count = 0;
        if(count == c_num){
            winner = true;
            return true;
        }
    }
    if(step < n*n) return false;
    return true;
}

void who_win(int move, bool check, bool winner){
    if(check && winner){
        if(move == 1) cout << "---Player O win!!!---";
        else cout << "---Player X win!!!---";
    }
    else{
        cout << "-----DRAW-----";
    }
}

void print_Game(int** map, int n){
    cout << endl << "  ";
    for(int i  = 0; i < n; i++) cout << i+1 << " ";
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << i+1 << "|";
        for(int j  = 0; j < n; j++){
            if(map[i][j] == 0) cout << "_" << "|";
            else if(map[i][j] == 1) cout << "x" << "|";
            else if(map[i][j] == -1) cout << "o" << "|";
        }
        cout << endl;
    }
}

int** setup(int** map, int n){
    map = new int*[n];
    for(int i = 0; i < n; i++) map[i] = new int[3];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            map[i][j] = 0;
        }
    }
    return map;
}

int** move_game(int** map, int move, int x, int y, int n, bool& checkMove){
    if(x < 1 || x > n) return map;
    if(y < 1 || y > n) return map;
    if(map[x - 1][y - 1] == 0) {
        int** n_map = new int*[n];
        for(int i  = 0; i < n; i++){
            n_map[i] = new int[n];
        }
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                n_map[i][j] = map[i][j];
            }
        }
        n_map[x - 1][y - 1] = move;
        checkMove = true;
        return n_map;
    }
    return map;
}

int MinMax(int** map, int a, int b ,int d /*depth*/, bool AI, int n, int x, int y, int step, int pla){
    int val = Jugde(pla, n ,x, y, step, map);
    bool dont_care = false;
    //cout << val << endl;
    if(val == 1)return 999;
    if(val == -1)return -999;
    if(end_game(pla,x,y,n,step,map, dont_care) || d == 0 ) return val;
    State s[3] = {State(-99,-99,-99),
                  State(-99, -99, -99),
                  State(-99, -99, -99)};
    if(AI){//Maximum player
        //cout << "Find AI move" << endl;
        int** child = nullptr;
        for(int i  = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                bool checkMove = false;
                if(child != nullptr){
                    int** n_child = child;
                    child = nullptr;
                    for(int  k = 0; k < n; k++) delete n_child[k];
                    delete[] n_child;
                }
                child = move_game(map, pla*-1, i, j,n, checkMove);
                if(checkMove) {
                    int fake_s = step + 1;
                    int judge_val = Jugde(pla*-1, n, i, j, fake_s, child);
                    int found_empty = 0;
                    for (int k = 0; k < 3; k++) {
                        //cout << "find tree" << endl;
                        if (s[k].val == -99) {
                            found_empty = 1;
                            s[k].val = judge_val;
                            s[k].x = i;
                            s[k].y = j;
                            break;
                        }
                    }
                    if (found_empty == 0) {
                        //cout << "find tree 2" << endl;
                        int min_idx = 0;
                        int min = s[0].val;
                        for (int k = 1; k < 3; k++) {
                            if (s[k].val < min) {
                                min = s[k].val;
                                min_idx = j;
                            }
                        }
                        if (s[min_idx].val < judge_val) {
                            s[min_idx].val = judge_val;
                            s[min_idx].x = i;
                            s[min_idx].y = j;
                        }
                    }
                }
                else{child = nullptr;}
            }
        }
        //cout << "Done heuristic" << endl;
        for(int i = 0; i < 3; i++){
            bool c = false;
            if(child != nullptr){
                int** n_child = child;
                child = nullptr;
                for(int  k = 0; k < n; k++) delete n_child[k];
                delete[] n_child;
            }
            if(s[i].val != -99) {
                child = move_game(map, pla * -1, s[i].x, s[i].y, n, c);
                int temp = MinMax(child, a, b, d - 1, false, n, s[i].x, s[i].y, step + 1, pla * -1);
                a = max(temp, a);
                //cout << "we are here" << endl;
                if (a >= b) break;
            }
        }
        return a;
    }
    else{
        // cout << "Predict player move" << endl;
        int** child = nullptr;
        for(int i  = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                bool checkMove = false;
                if(child != nullptr){
                    int** n_child = child;
                    child = nullptr;
                    for(int  k = 0; k < n; k++) delete n_child[k];
                    delete[] n_child;
                }
                child = move_game(map, pla*-1, i, j,n, checkMove);
                if(checkMove) {
                    int fake_s = step + 1;
                    int judge_val = Jugde(pla, n, i, j, fake_s, child);
                    int found_empty = 0;
                    for (int k = 0; k < 3; k++) {
                        if (s[k].val == -99) {
                            found_empty = 1;
                            s[k].val = judge_val;
                            s[k].x = i;
                            s[k].y = j;
                            break;
                        }
                    }
                    if (found_empty == 0) {
                        int max_idx = 0;
                        int max = s[0].val;
                        for (int k = 1; k < 3; k++) {
                            if (s[k].val > max) {
                                max = s[k].val;
                                max_idx = j;
                            }
                        }
                        if (s[max_idx].val < judge_val) {
                            s[max_idx].val = judge_val;
                            s[max_idx].x = i;
                            s[max_idx].y = j;
                        }
                    }
                }else{child = nullptr;}
            }
        }
        //cout << "Done heuristic" << endl;
        for(int i = 0; i < 3; i++){
            bool c = false;
            if(child != nullptr){
                int** n_child = child;
                child = nullptr;
                for(int  k = 0; k < n; k++) delete n_child[k];
                delete[] n_child;
            }
            if(s[i].val != -99) {
                child = move_game(map, pla * -1, s[i].x, s[i].y, n, c);
                int temp = MinMax(child, a, b, d - 1, true, n, s[i].x, s[i].y, step + 1, pla * -1);
                b = min(temp, a);
                //cout << " here we are" << endl;
                if (a >= b) break;
            }
        }
        return b;
    }
}

int AI_turn(int** map, int d, bool AI, int n, int x, int y, int step, int pla){
    //cout << "this is ai turn" << endl;
    return MinMax(map, -2, 2, d, AI, n, x ,y ,step, pla);
}

void play_game(){
    int n;
    bool winner = false;
    bool(*check)(int, int, int, int,int ,int**, bool&);
    SET_UP:
    cout << "Enter the size that you want to play: ";
    cin >> n;
    if(n < 3) goto SET_UP;
    check = end_game;
    int** map  = setup(map, n);
    bool endgame = false;
    int step = 0;
    print_Game(map , n);
    int move = 1;
    int x, y;
    int mn ;
    int ** n_map;
    int ** child;
    int ** min_child;
    bool checkMove = false;
    while(!endgame){
        if(move == 1) {
            AGAIN:
            cout << endl;
            cout << "Position of x: ";
            cin >> x;
            cout << endl;
            cout << "Position of y: ";
            cin >> y;
            if (x == 0 || y == 0) break; //Quit game
            n_map = move_game(map, move, x, y, n, checkMove);
            if (!checkMove) goto AGAIN;
            int **pre_map = map;
            map = n_map;
            for (int i = 0; i < n; i++) {
                delete pre_map[i];
            }
            delete[] pre_map;
            checkMove = false;
            step++;
            endgame = (*check)(move, x, y, n, step, map, winner);
            move *= -1;
            cout << endl << endl << endl << endl << endl;
            print_Game(map, n);
        }
            //AI turn
        else {
            mn = 2;
            int pos_x, pos_y;
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    bool check_AI = false;
                    child = move_game(map, -1, i, j, n, check_AI);
                    if (!check_AI) continue;
                    //cout << "i: " << i << " j: " << j << endl;
                    int temp = AI_turn(child, 3, true, n, i, j, step + 1, -1);
                    if (mn > temp) {
                        //cout <<  "temp: " << temp << endl;
                        mn = temp;
                        min_child = child;
                        pos_x = i;
                        pos_y = j;
                    }
                }
            }
            int** pre_map = map;
            map = min_child;
            for (int i = 0; i < n; i++) {
                delete pre_map[i];
            }
            delete[] pre_map;
            checkMove = false;
            step++;
            endgame = (*check)(move, pos_x, pos_y, n, step, map, winner);
            move *= -1;
            cout << endl << endl << endl << endl << endl;
            print_Game(map, n);
        }
    }
    who_win(move, endgame, winner);
}

int main() {
    play_game();
}
