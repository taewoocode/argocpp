#include <bits/stdc++.h>
using namespace std;
int solution(vector<int> array, int height){
    vector<int> v;
    for(int i = 0; array.size(); i++){
        if(array[i] > height){
            array.push_back(i);
        }
    }
    return v.size();
}