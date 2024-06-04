#include <bits/stdc++.h>
using namespace std;
int main(){
    deque<int> d;
    d.push_back(5); //5
    d.push_back(2); //5 2 
    d.push_front(3); // 3 5 2
    d.pop_back(); //  3 5
    d.pop_front(); // 5

    for(int i : d) cout << i << '\n';


    return 0;
}