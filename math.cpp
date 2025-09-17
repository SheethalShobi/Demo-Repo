#include <iostream>
#include <vector>
using namespace std;

int sumVector(const vector<int>& nums) {
    int sum = 0;
    for(int num : nums) sum += num;
    return sum;
}

int main() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "C++ Sum of numbers: " << sumVector(numbers) << endl;
    return 0;
}
