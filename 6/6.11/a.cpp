#include<bits/stdc++.h>
using namespace std;
int x = 0, y = 0;
int num = 0;
int Max = -1;

int main(){
    for(int i = 1; i <= 9; i++){
        for(int j = 1; j <= 9; j++){
            cin >> num;
            if(Max < num){
                Max = num;
                x = i;
                y = j;
            }
        }
    }
    cout << Max << '\n' << " " << y;
    return 0;
}