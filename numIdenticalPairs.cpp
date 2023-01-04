#include <iostream>
#include <map>
#include <vector>

using namespace std;

int numIdenticalPairs(vector<int> nums)
{
    int res = 0;
    map<int, int> mNums;
    for (int &num : nums)
        res += mNums[num]++;
    return res;
}

int main(int argc, char const *argv[])
{
    cout << numIdenticalPairs({1, 2, 3, 1, 1, 2, 1});
}
