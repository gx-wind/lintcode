#include <iostream>
#include <stack>

using namespace std;

bool isValidParentheses(string s) {
    // write your code here
    stack<char> stack;
    for (int i = 0;i < s.size(); i++) {
        if (s[i] == '(')
            stack.push(')');
        else if (s[i] == '[')
            stack.push(']');
        else if (s[i] == '{')
            stack.push('}');
        else {
            if (stack.top() != s[i])
                return false;
            stack.pop();
        }
    }
    if (stack.empty())
        return true;
    return false;
}
