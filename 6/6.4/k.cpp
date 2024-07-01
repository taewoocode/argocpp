#include<bits/stdc++.h>
using namespace std;
map<string, int> _map;
string a[] ={"박태우","이승철","박종선"};
int main(){
    for(int i = 0; i < 3; i++){
        _map.insert({a[i], i + 1});
        _map[a[i]] = i + 1;
    }
    cout << _map["kundol"] << '\n';
    _map["kundol"] = 4;
    cout << _map.size() << '\n';
    _map.erase("kundol");
    auto it = _map.find("kundol");
    if(it == _map.end()){
        cout << "못찾겠노";
    }
    _map["kundol"] = 100;
    
}

