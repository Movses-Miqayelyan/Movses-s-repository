#include <iostream>
using namespace std;

int countArgs(){
    return 0;
}

int count = 0;

template<typename First, typename... Args>
int countArgs(First first, Args... args){
    count++;
    countArgs(args...);
    return count;
}

int main (){
    cout << countArgs(1, 2, 3 ,4, 5);
}