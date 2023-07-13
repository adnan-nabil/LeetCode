#define ll long long
class Solution
{
public:
    bool check(vector<int> &ranks, int &cars, ll time)
    {
        ll done = 0;
        for (auto r : ranks)
        {
            ll x = time / r;
            ll y = floor(sqrt(x));

            done += y;
        }

        if(done >= cars)
        {
            return true;
        }else
        {
            return false;
        }
    }

    long long repairCars(vector<int> &ranks, int cars)
    {

        ll low = 1, high = 1e14, ans = 0;
        while (low <= high)
        {
            ll mid = (low + high) / 2;
            if(check(ranks, cars, mid))
            {
                ans = mid;
                high = mid - 1;
            }else
            {
                low = mid + 1;
            }
        }

        return ans;
    }
};
