class Solution
{
public:
    int minimizeMax(vector<int> &nums, int p)
    {
        sort(nums.begin(), nums.end());

        int left = 0, right = 1e9 + 10, ans = -1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            int count = 0;

            for (int i = 0, n = nums.size(); i < n;)
            {
                if (i + 1 < n && nums[i + 1] - nums[i] <= mid)
                {
                    count++;
                    i += 2;
                }
                else
                {
                    i++;
                }
            }
            if (count >= p)
            {
                ans = mid;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return ans;
    }
};
