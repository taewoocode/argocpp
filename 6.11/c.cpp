#include <bits/stdc++.h>
using namespace std;
int x = 0, y = 0;
int num = 0;
int Max = -1;
int main(){
    for(int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            cin >> num;
            if(Max < num){
                Max = num;
                x = i + 1;
                y = j + 1;
            }
        }
    }
    cout << Max << '\n' << x << " " << y;
    return 0;
}