#include <iostream>
#include <array>
using namespace std;

array<int, 5> createArray(){
    array<int, 5> arr = {1, 2, 3, 4, 5};
    return arr;
}

int main(){
    
    auto myArr = createArray();
    
    for (int x : myArr) {
        cout << x << " ";
    }
    cout << std::endl;

    return 0;
}