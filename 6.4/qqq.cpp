#include<bits/stdc++.h>
using namespace std;
string solution(string my_string){
    string answer = "";
    vector<char> vowels = {'a','e','i','o','u'};
    for(char c : my_string){
        if(find(vowels.begin(), vowels.end(), c) == vowels.end())
        answer += c;
    }
    return answer;
}

int main(){
    string input = "hello world";
    string output = solution(input);
    cout << input << '\n';
    cout << output << '\n';

    return 0;
}