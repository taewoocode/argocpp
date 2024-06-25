#include<bits/stdc++.h>
using namespace std;
int x,y,w,h;
int temp1,temp2;
int main(){
    cin >> x >> y >> w >> h;
    temp1 = min(x,y); 
    temp2 = min(w-x,h-y);
    int answer = min(temp1,temp2);
    cout << answer << '\n';
    return 0;
}