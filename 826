class Solution
{
public:
    int maxProfitAssignment(vector<int> &difficulty, vector<int> &profit, vector<int> &worker)
    {

        vector < pair < int, int >> p;

        for (int i = 0; i < difficulty.size(); i++)
        {
            p.push_back(make_pair(difficulty[i], profit[i]));
        }

        sort(p.begin(), p.end());

        int total_profit = 0;

        for (int i = 0; i < worker.size(); i++)
        {
            int x = worker[i], ans = 0;

            int low = 0, high = difficulty.size() - 1;
            while (low <= high)
            {
                int mid = low + (high - low) / 2;
                if (p[mid].first <= x)
                {
                    ans = mid;
                    low = mid + 1;
                }
                else
                {
                    high = mid - 1;
                }
            }

            if (ans == 0)
            {
                if (p[ans].first <= x)
                {
                    total_profit += p[ans].second;
                }
            }
            else
            {
                int temp = ans;
                long long c = p[ans].second;
                while (temp--)
                {
                    if (p[temp].second > c)
                    {
                        c = p[temp].second;
                    }
                }

                // cout << c<< endl;
                total_profit += c;
            }
        }

        return total_profit;
    }
};
