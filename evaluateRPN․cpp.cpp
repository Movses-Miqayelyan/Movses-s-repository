#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int evaluateRPN(const vector<string>& tokens) {
    stack<int> st;
    for (const string& token : tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            if (token == "+") st.push(a + b);
            else if (token == "-") st.push(a - b);
            else if (token == "*") st.push(a * b);
            else if (token == "/") st.push(a / b);
        } else {
            st.push(stoi(token)); 
        }
    }
    return st.top();
}

int main() {
    vector<string> expr = {"2", "1", "+", "3", "*"}; 
    cout << evaluateRPN(expr) << endl;
    return 0;
}