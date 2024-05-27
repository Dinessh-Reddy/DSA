#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> squares_of_the_sorted_array(vector<int> &nums)
    {
        int i = 0, j = nums.size() - 1, k = nums.size() - 1;
        vector<int> temp(nums.size(), 0);
        while (i < j)
        {
            if (abs(nums[i]) > abs(nums[j]))
            {
                temp[k--] = pow(nums[i++], 2);
            }
            else
            {
                temp[k--] = pow(nums[j--], 2);
            }
        }
        return temp;
    }
};

int main()
{
    Solution s;
    vector<int> nums{-7, -3, -1, 1, 2, 3};
    vector<int> res = s.squares_of_the_sorted_array(nums);
    for (int n : res)
    {
        cout << n << " ";
    }
    cout << endl;
}