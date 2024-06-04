#include<bits/stdc++.h>
using namespace std;
vector<int> main(vector<int> array){
    vector<int> answer;
    int num = -1;
    int index = 1;
    for(int i = 0; i < array.size(); i++){
        if(array[i] > num){
            array[i] = num;
            array[i] = index;
        }
    }
    answer.push_back(num);
    answer.push_back(index);
    return answer;
}