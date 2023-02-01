#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int minimumSum(int num)
{
    vector<int> digit(4, 0);
    for (int i = 0; i < 4; i++)
    {
        digit[i] = num % 10;
        num /= 10;
    }
    sort(digit.begin(), digit.end());
    return (digit[0] * 10 + digit[2]) + (digit[1] * 10 + digit[3]);
}

int main(int argc, char const *argv[])
{
    cout << minimumSum(2932) << endl;
}
