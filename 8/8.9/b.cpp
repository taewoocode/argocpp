#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string, int> mymap = {{"apple", 1}, {"banana",2},{"cherry", 3}};
    for(auto it = mymap.begin(); it != mymap.end(); it++){
        cout << it -> first << " : " << it -> second << '\n';
    }

    auto result = mymap.find("banana");
    if(result != mymap.end()){
        cout << "Found: " << result -> first << " -> " << result -> second << '\n';
    } else {
        cout << "Not found" << '\n';
    }
}