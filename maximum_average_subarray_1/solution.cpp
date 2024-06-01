#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    double findMaxAverage(vector<int> &nums, int k)
    {
        int i = 0, j = k;
        double s = accumulate(nums.begin(), nums.begin() + k, 0.0);
        double m = s;
        while (j < nums.size())
        {
            s = s + nums[j] - nums[i];
            m = max(m, s);
            i++;
            j++;
        }
        return m / k;
    }
};