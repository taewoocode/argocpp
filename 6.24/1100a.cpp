/*
체스판은 흰검흰검흰검흰검
       검흰검흰검흰검흰
*/

#include<bits/stdc++.h>
using namespace std;
char board[8][8];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
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
    cout << count << '\n';
    return 0;
}