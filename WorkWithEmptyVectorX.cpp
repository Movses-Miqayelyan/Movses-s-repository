#include <iostream>
#include <vector>
using namespace std;

void workWithEmptyVector() {
    vector<int> v();
for (int i = 0; i < 10; i++) {
       v.push_back(i);
    }
}

int main() {
    workWithEmptyVector();
    cout << "Size: " << vec.size() << '\n';
    cout << "Capacity: " << vec.capacity() << '\n'
    return 0;
}