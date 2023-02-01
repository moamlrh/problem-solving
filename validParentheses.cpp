#include <iostream>
#include <unordered_map>
#include <stack>

using namespace std;

bool isValid(string str)
{
    stack<char> stk;
    for (char c : str)
    {
        if (c == '(' || c == '{' || c == '[')
            stk.push(c);
        else
        {
            if (stk.empty())
                return false;
            char top = stk.top();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '['))
                return false;
            stk.pop();
        }
    }
    return stk.empty();
}

int main(int argc, char const *argv[])
{
    cout << isValid("()");
    return 0;
}
