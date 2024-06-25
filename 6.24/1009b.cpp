#include<bits/stdc++.h>
using namespace std;
int a,b,t;
int temp;
int main(){
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> a >> b;
    
    temp =  a % 10; //일의자리 수를 temp에 저장함
    if(temp == 0){
        temp = 10;
    }
    for(int j = 0; j < b - 1; j++){
        temp = (temp * a) % 10;
        if(temp == 0){
            temp = 10;
        }
    }
    cout << temp << '\n';
}
    return 0;
}