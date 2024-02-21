class Solution
{
public:
    int findRadius(vector<int> &houses, vector<int> &heaters)
    {

        sort(heaters.begin(), heaters.end());

        int ans = INT_MIN;

        for (int i = 0; i < houses.size(); i++)
        {
            int diff = INT_MAX;
            int low = 0, high = heaters.size() - 1;

            while (low <= high)
            {
                int mid = low + (high - low) / 2;

                int c = abs(houses[i] - heaters[mid]);
                diff = min(diff, c);

                if (houses[i] == heaters[mid])
                {
                    break;
                }

                if (houses[i] > heaters[mid])
                {
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }

            ans = max(ans, diff);
        }

        return ans;
    }
};
