class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> result;
        long long int left = operation(nums, target, true);
        long long int right = operation(nums, target, false);
        result.push_back(left);
        result.push_back(right);
        return result;
    }

private:
    long long int operation(vector<int> nums, long long int target, bool side)
    {
        long long int ans = -1;
        long long int r = nums.size() - 1, l = 0, mid;

        while (l <= r)

        {
            mid = l + (r - l) / 2;

            if (nums[mid] > target)
            {
                r = mid - 1;
            }
            else
            {
                if (nums[mid] < target)
                {
                    l = mid + 1;
                }
                else
                {
                    if (side)
                    {
                        ans = mid;
                        r = mid - 1;
                    }
                    else
                    {
                        ans = mid;
                        l = mid + 1;
                    }
                }
            }
        }

        return ans;
    }
};
