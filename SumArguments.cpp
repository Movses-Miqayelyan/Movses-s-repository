#include <iostream>
using namespace std;

template <typename... arg>
auto sum(arg... args){
    return (0 + ... + args);
}

int main(){
    cout << sum(1, 2, 3, 101);

    return 0;
}