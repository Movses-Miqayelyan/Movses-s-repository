#include <iostream>
using namespace std;

template<typename T>

T findMax(T arg){
    return arg;
}

template <typename T, typename... Args>
T findMax(T first, Args... args) {
    return ((first > findMax(args...) ? first : findMax(args...)));
}

int main() {
    cout << findMax(1, 2, 3, 101) ;
    return 0;
}