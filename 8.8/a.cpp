#include<bits/stdc++.h>
using namespace std;

int compare(int A, int B){
    if(A > B) return true;
    return false;
}

int solution(vector<int> A, vector<int> B)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    
    //최솟값은 -> 누적합 + 현재가장 작은 값을 두 배열에서 뽑아온다.
    //현재값을 저장하는 sum 
    int sum = 0;
    for(int i = 0; i < A.size(); i++){
        int value = A[i] * B[i];
        sum = sum + value;
    }
    return sum;
}