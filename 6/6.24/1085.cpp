#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,w,h;
    int temp1,temp2;
    cin >> x >> y >> w >> h;
    temp1 = min(x,y);
    temp2 = min(x-w,y-h);
    int answer = min(temp1,temp2);
    cout << answer << '\n';
    return 0;
}

#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int x,y,w,h;
    int tmp1,tmp2;
    cin >> x >> y >> w >> h;
    tmp1 = min(x,y);
    tmp2 = min(w-x,h-y);
    cout << min(tmp1,tmp2);
}