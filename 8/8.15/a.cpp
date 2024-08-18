#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3,4,5};
    //5가 있는가?
    for(int i = 0; i < v.size(); i++){
        if(v[i] == 5){
            cout << "찾음" << ' ';
        }
    }
    int i = 0;
    while(i < v.size()){
        if(v[i] == 5){
            cout << i << '\n';
            break;
        }
        i++;

    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int n, cnt;
const int INF = 1e6; //100000
int main(){
    cin >> n;
    for(int i = 2400; i < INF; i++){
        string a = to_string(i);
        if(a.find("2400") != string::npos){
            cnt++;
            cout << cnt << ' : ' << a << '\n';
        }
    }
    return 0;
}



