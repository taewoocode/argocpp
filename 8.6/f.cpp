#include<bits/stdc++.h>
using namespace std;
int solution(vector<vector<int>> sizes) {
    int answer =0;
    int h_max = 0;
    int w_max = 0;
    for(auto size : sizes){
        int w = max(size[0], size[1]);
        int h = min(size[0], size[1]);

        if(w > w_max){
            w_max = w;
        }
        if(h > h_max){
            h_max = h;
        }
    }
    answer = h_max * w_max;
}