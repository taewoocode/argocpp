#include <bits/stdc++.h>
using namespace std;
int main(string my_string, string overWrite_string, int n){

    string answer = "";
    for(int i = 0; i < overWrite_string.length(); i++){
        my_string[n + i] = overWrite_string[i]; 
    }
    answer = my_string;
    return 0;
}