#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, temp, target, distance = INT_MAX;
    cin >> n;

    vector<int> nums(n);
    vector<int> ans(3);

    for (auto& num: nums)
    {
        cin >> num;
    }
    sort(nums.begin(), nums.end());

    cin >> target;

    for (int i = 1; i < n - 1; ++i)
    {
        int l = 0, r = n - 1;
        while (l < i && r > i)
        {
            int sum_i = nums[l] + nums[r] + nums[i];
            int distance_i = abs(sum_i - target);
            if (distance_i < distance)
            {
                distance = distance_i;
                ans[0] = nums[l];
                ans[1] = nums[i];
                ans[2] = nums[r];
            }
            else
            {
                if (sum_i > target)
                {
                    --r;
                }
                else
                {
                    ++l;
                }
            }
        }
    }
    for (auto i: ans)
    {
        cout << i << " ";
    }

}
