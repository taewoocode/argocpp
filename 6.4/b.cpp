#include <string>
#include <vector>

using namespace std;

vector<int> main(vector<int> numbers, int num1, int num2) {
    vector<int> answer;
    for(int i = num1; i <= num2; i++){
        answer.push_back(numbers[i]);
    }
    return answer;
}