#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

string longestCommonPrefix(vector<string> &arr)
{
    string prefix = "";

    for (int i = 0; i < arr[0].size(); i++)
    {
        for (int j = 1; j < arr.size(); j++)
            if (arr[0][i] != arr[j][i])
                return prefix;
        prefix += arr[0][i];
    }
    return prefix;
}

int main(int argc, char const *argv[])
{
    vector<string> arr = {"teeeeest", "tear", "tell"}; // fl
    cout << longestCommonPrefix(arr) << endl;
}