#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

bool isOperator(string op) {
    if (op == "+" || op == "-" || op == "*" || op == "/")
        return true;
    return false;
}

int evalRPN(vector<string> tokens) {
    // write your code here
    stack<int> numbers;
    for (int i = 0; i < tokens.size(); i++) {
        int n2, n1;
        if (isOperator(tokens[i])) {
            n2 = numbers.top();
            numbers.pop();
            n1 = numbers.top();
            numbers.pop();
        }
        if (tokens[i] == "+") {
            numbers.push(n1+n2);
        } else if (tokens[i] == "-") {
            numbers.push(n1-n2);
        } else if (tokens[i] == "*") {
            numbers.push(n1*n2);
        } else if (tokens[i] == "/") {
            numbers.push(n1/n2);
        } else {
            numbers.push(stoi(tokens[i]));
        }
    }
    return numbers.top();
}

int main() {
    return 0;
}
