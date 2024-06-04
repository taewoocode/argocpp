#include<bits/stdc++.h>
using namespace std;
string solution(vector<string> participant, vector<string> completion){
    string answer = "";
    map<string, int> map;    
    for(auto player : participant){
        if(map.end() == map.find(player))
            map.insert(make_pair(player,1));
        else{
            map[player]++;
        }   
    }
    for(auto player : completion){
        map[player]--;
    }
    for(auto player : participant){
        if(map[player] > 0){
            answer = player;
            break;
        }   
    }
    return answer;
}