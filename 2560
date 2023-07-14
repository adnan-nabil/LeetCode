#define ll long long
class Solution
{
public:
    bool check(vector<int> &nums, int k, int mid)
    {
        int i = 0;
        while (i < nums.size())
        {
            if (k == 0)
            {
                break;
            }
            if (nums[i] <= mid)
            {
                k--;
                i += 2;
            }
            else
            {
                i++;
            }
        }

        if (k == 0)
        {
            return true;
        }

        return false;
    }

    int minCapability(vector<int> &nums, int k)
    {

        ll low = 1, high = INT_MAX, ans = INT_MAX;

        while (low <= high)
        {
            ll mid = low + (high - low) / 2;

            if (check(nums, k, mid))
            {
                high = mid - 1;
                ans = min(ans, mid);
            }
            else
            {
                low = mid + 1;
            }
        }

        return ans;
    }
};
