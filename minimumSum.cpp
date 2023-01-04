#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int minimumSum(int num)
{
    vector<int> digit(4, 0);

    int i = 0;
    while (num > 0)
    {
        digit[i] = num % 10;
        num /= 10;
        i++;
    }
    sort(digit.begin(), digit.end());
    int n1 = digit[0] * 10 + digit[2];
    int n2 = digit[1] * 10 + digit[3];
    cout << n1 << endl
         << n2 << endl;
    return n1 + n2;
}

int main(int argc, char const *argv[])
{
    cout << minimumSum(2932) << endl;
}
