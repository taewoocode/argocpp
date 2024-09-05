#include<bits/stdc++.h>
using namespace std;
string str = "i love seoul";
vector<string> words;
string word;
int main(){
    for(int i = 0; i < str.size(); i++){
        if(str[i] != ' '){
            word += str[i];
        } else {
            if(!word.empty()){
                words.push_back(word);
                word.clear();
            }
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }

    for(auto w : words){
        cout << w << ' ';
    }



    return 0;
}

