#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int func(vector<int> &nums)
    {
        int ans = 1, start = 1;
        for (int num : nums)
        {
            start += num;
            if (start < 1)
            {
                ans += (1 - start);
                start = 1;
            }
        }
        return ans > 0 ? ans : 1;
    }
};