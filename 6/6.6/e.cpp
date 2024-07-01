#include<bits/stdc++.h>
using namespace std;
int main(string my_string, vector<int> index_list){
    string answer = "";
    for(int i = 0; i < index_list.size(); i++){
        answer += my_string[index_list[i]];
        
    }

    /**
     * ex) zpiaz라면 ? [1,2,0,0,3] 5번 반복함
     * index_list[0] = 1을 저장하고 있다.
     * my_string[1] 로 변환이 된다.
     * my_string[1]은 p로 변환이 된다.
     * index_list[1] = 2를 저장하고 있다.
     * my_string[2]는 i로 변환이 된다.
    */
   
}