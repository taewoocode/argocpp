#include<bits/stdc++.h>
using namespace std;
int count;
int main(){
    char board[8][8];
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            cin >> board[i][j];
        }
    }
    int count = 0;
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(board[i][j] == 'F' && (i + j) % 2 == 0){
                count++;
            }
        }
    }


    return 0;
}