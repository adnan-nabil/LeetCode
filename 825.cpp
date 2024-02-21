class Solution
{
public:
    int numFriendRequests(vector<int> &ages)
    {
        sort(ages.begin(), ages.end());

        int total_ans = 0;

        for (int i = 1; i < ages.size(); i++)
        {
            int x = ages[i];
            int z = (x / 2) + 7;

            int left = 0, right = i, ans = right;
            while (left <= right)
            {
                int mid = left + (right - left) / 2;
                if (ages[mid] > z)
                {
                    ans = mid;
                    right = mid - 1;
                }
                else
                {
                    left = mid + 1;
                }
            }

            // cout << i << "  " << ans << endl;
            total_ans += (i - ans);
        }

        for (int i = 0; i < ages.size(); i++)
        {
            int z = (ages[i] / 2) + 7;
            if (ages[i] > z)
            {
                int left = i, right = ages.size() - 1, ans = left;
                while (left <= right)
                {
                    int mid = left + (right - left) / 2;
                    if (ages[mid] > ages[i])
                    {
                        right = mid - 1;
                    }
                    else
                    {
                        ans = mid;
                        left = mid + 1;
                    }
                }

                total_ans += (ans - i);
            }
        }

        return total_ans;
    }
};
