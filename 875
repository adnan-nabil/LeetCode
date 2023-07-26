class Solution
{
public:
    bool check(vector<int> piles, int h, int dummy)
    {
        long long need_hour = 0;
        for (int i = piles.size() - 1; i >= 0; i--)
        {
            int x = piles[i] / dummy;
            if (x == 0)
            {
                x = 1;
            }

            need_hour += x;

            piles[i] -= (dummy * x);

            if (piles[i] > 0)
            {
                need_hour += 1;
            }
        }

        if (need_hour <= h)
        {
            
            return true;
        }

        
        return false;
    }

    int minEatingSpeed(vector<int> &piles, int h)
    {

        sort(piles.begin(), piles.end());

        int left = 1, right = 1e9, ans = 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (check(piles, h, mid) == true)
            {
                ans = mid;
                // cout << ans << endl;
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }

            // cout << left << "  " << right << endl;
        }

        return ans;
    }
};
