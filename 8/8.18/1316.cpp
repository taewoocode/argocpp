#include<bits/stdc++.h>
using namespace std;
int n;
vector<string> v;
vector<bool> seen(26,false);
int samecount = 0;
bool is_group_word(const string& word){
    fill(seen.begin(), seen.end(), false); //false로 다 초기화를 한다.
    for(int i = 0; i < word.size(); i++){ 
    //word의 사이즈를 돌면서 true이면 이미 배열에서 한번 등장한것
    //배열이 false로 초기화가 되어있다면 아직 등장하지 않은 것
    //word[i] != word[i - 1]은 연속되지 않았음을 검사하는 것
    //'a'는 아스키코드 값 97을 나타내므로 b는 -> 98 - 97 = seen[1]
        if(seen[word[i] - 'a'] && word[i] != word[i-1]) return false;
        seen[word[i] - 'a'] = true;
    }
    return true;
    
}
int main(){
    cin >> n;
    v.resize(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < n; i++){
        if(is_group_word(v[i])){
            samecount++;
        }
    }
    cout << samecount << '\n';

    return 0;
}