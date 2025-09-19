#include <iostream>
#include <array>
using namespace std;

template <typename T, size_t n>
int findElement(const array<T, n>& arr, T thing) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == thing) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    array<int, 7> myArr = {1, 2, 3, 4, 5, 6, 7};
    
    cout << findElement(myArr, 5) << endl; 
    cout << findElement(myArr, 10) << endl;

    return 0;
}