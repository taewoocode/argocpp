#include<bits/stdc++.h>
using namespace std;
int modify(int value){
    value = 10;
    cout << "modify: " << &value << '\n';
    cout << "modify: " << value << '\n';
}

int main(){
    int value = 5;
    cout << &value << '\n';
    cout << value << '\n';
    modify(value);
    cout << value << '\n';
}