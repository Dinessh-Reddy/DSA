#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int i = 0, j = 0, m = 0, p = k;
        while (j < nums.size())
        {
            if (nums[j] == 0)
            {
                while (p == 0 and i <= j)
                {
                    if (!nums[i])
                        p++;
                    i++;
                }
                p--;
            }
            j++;
            m = max(m, j - i);
        }
        return m;
    }
};