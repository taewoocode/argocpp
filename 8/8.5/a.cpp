#include<bits/stdc++.h> 
using namespace std;

//최대공약수
int gcd(int a, int b){
    if(a % b == 0) return b;
    else return gcd(b, a % b);
}

//최소공배수
int lcm(int a, int b){
    return a * b / gcd(a, b);
}

vector<int> solution(int n, int m){
    vector<int> answer;
    answer.push_back(gcd(n,m));
    answer.push_back(lcm(n,m));

    return answer;
}

int main() {
    int n, m;
    cout << "Enter two numbers: ";
    cin >> n >> m;

    vector<int> result = solution(n, m);
    cout << "GCD: " << result[0] << endl;
    cout << "LCM: " << result[1] << endl;

    return 0;
}


