#include<bits/stdc++.h>
using namespace std;
string solution(string my_string){
    for(int i = 0; i < my_string.size(); i++){
        if(isupper(my_string[i])){ //대문자이면
            my_string[i] = tolower(my_string[i]);
        } else {
            my_string[i] = toupper(my_string[i]);
        }
    }
    return my_string;
}