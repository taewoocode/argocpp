#include <bits/stdc++.h>
using namespace std;
int n;
bool areFriends[10][10]; //크기가 2차원인 배열선언 0과 1이 친구면 true 
int countParings(bool taken[10]){
    int firstFree = -1;
    for(int i = 0; i < n; i++){
        if(!taken[i]) {
            firstFree = i;
            break;
        }
    }
    if(firstFree == -1) return -1;
    int ret = 0;
    for(int pairWith = firstFree + 1; pairWith < n; pairWith++){
        if(!taken[pairWith] && areFriends[firstFree][pairWith]) {
            taken[firstFree] = taken[pairWith] = true;
            ret += countParings(taken);
            taken[firstFree] = taken[pairWith] = false;
        }
    }
    return ret;
}
