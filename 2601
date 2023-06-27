class Solution
{
public:
    bool primeSubOperation(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> prime;
        bool a[1025]={0};
        a[0] = 1, a[1] = 1;
        for (int i = 4; i <= 1015; i += 2)
        {
            a[i] = 1;
        }
        for (int i = 3; i <= 1015; i += 2)
        {
            for (int j = i * i; j <= 1015; j += i)
            {
                a[j] = 1;
            }
        }

        for (int i = 2; i <= 1015; i++)
        {
            if (a[i] == 0)
            {
                prime.push_back(i);
            }
        }

        int prev = 0;
        for (int i = 0; i < n; i++)
        {
            int highest_range = nums[i] - (prev + 1);
            int d = 0;
            for (auto x : prime)
            {
                if (x <= highest_range)
                {
                    d = x;
                    continue;
                }
                else
                {
                    nums[i] = nums[i] - d;
                    prev = nums[i];
                    break;
                }
            }
        }

        for (int i = 1; i < n; i++)
        {
            if (nums[i] <= nums[i - 1])
            {
                return false;
            }
        }
        return true;
    }
};
