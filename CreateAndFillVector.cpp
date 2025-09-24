#include <iostream>
#include <vector>
using namespace std;

void createAndFillVector(int N) {
    vector<int> v(N);

    for (int i = 0; i < N; ++i) {
        v[i] = i + 1;
    }
    for (int x : v) {
        cout << x << " ";
    }
    cout << '\n';
    cout << "size: " << v.size() << "\n";
    cout << "capacity: " << v.capacity() << "\n";
}

int main() {
    createAndFillVector(9);

    return 0;
}