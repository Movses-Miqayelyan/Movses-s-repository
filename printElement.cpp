#include <iostream>
#include <string>

template <typename T>
void printElement(T element){
    std :: cout << element << '\n';
} 
int main(){
    int a = 5;
    double b = 5.2;
    std::string c = "C#==C++++";

    printElement(a);
    printElement(b);
    printElement(c);
    return 0;
}