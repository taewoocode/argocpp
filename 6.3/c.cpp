#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int N, M;

bool visited[10] = { false };
int arr[10] = { 0 };

void DFS(int n) {

    
   if (n == M) {
      for (int i = 0; i < M; i++) {
         cout << arr[i] << " ";
      }
      cout << '\n';
      return;
   }

   for (int i = 1; i <= N; i++) { 
      if (visited[i] == false) { 
         visited[i] = true; 
         arr[n] = i; 
         DFS(n + 1);
         visited[i] = false;
      }
   }
}

int main() {
    cin.tie(NULL), cout.tie(NULL);
    
    cin >> N >> M;
   
   DFS(0);

    return 0;
}