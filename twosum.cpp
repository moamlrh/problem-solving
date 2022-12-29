#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < nums.size(); i++)
    {
        auto it = hash.find(target - nums[i]);
        if (it != hash.end())
            return {it->second, i};
        hash[nums[i]] = i;
    }
    return {0, 0};
}
int main(int argc, char **argv)
{
    vector<int> arr{1, 3, 2, 2, 3, 4};

    auto res = twoSum(arr, 6);
    cout << "The numbers are : " << res[0] << " + " << res[1] << endl;

    return 0;
}
