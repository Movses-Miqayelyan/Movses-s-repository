#include <iostream>
using namespace std;

template <typename T>
void mySwap(T& elem1, T& elem2){
    T x = elem1;
    elem1 = elem2;
    elem2 = x;
}
int main() {
 int x = 1;
 int y = 2;
 mySwap(x , y);
 cout << x << " " << y << "\n";

}