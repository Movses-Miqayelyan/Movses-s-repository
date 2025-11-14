#include <iostream>
#include <stack>
#include <string>

using namespace std;

void reverseString(string& str){
    stack<char> st;
    for(char x : str){
        st.push(x);
    }
    str = "\0";
    while(!st.empty()){
        str += st.top();
        st.pop();
    }
}

int main(){
	string M = "annA";
    reverseString(M);
    cout << M;
}
