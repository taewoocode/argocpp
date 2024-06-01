#include <bits/stdc++.h>
using namespace std;
int n, m, cnt;

int main(){
    cin.tie(NULL), cout.tie(NULL);
    cin >> n >> m;
    cnt = 0;
    vector<int> nums;
    
    for(int i  = 0; i < n; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    
    sort(nums.begin(), nums.end());
    
    for(int i = 0; i < nums.size(); i++){
        
        int left = i;
        int right = nums.size() -1;
        while(left <= right){
            int mid = (left + right) / 2;
            
            int value = nums[i] + nums[mid];
            if(value == m){
                cnt++;
                break;
            }


            else if(value > m){
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }
       
    }
     
    cout << cnt << '\n';
       
    return 0;
}