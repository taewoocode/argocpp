#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    string odd ="";
    string even ="";
    for(auto v : num_list){
        if(v % 2 == 0){
            odd += to_string(v);
        } else {
            even += to_string(v);
        }
    }
    
    return stoi(odd) + stoi(even);
}