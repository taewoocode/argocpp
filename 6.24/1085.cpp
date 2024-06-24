#include<bits/stdc++.h>
using namespace std;
int temp1,temp2;
int x,y,w,h;
int main(){
    cin >> x >> y >> w >> h;
    int temp1 = min(x,y);
    int temp2 = min(x-w,y-h);
    int answer = min(temp1,temp2);
    cout << answer << '\n';
    return 0;
}