class Solution
{
public:
    vector<int> countPoints(vector<vector<int>> &points, vector<vector<int>> &queries)
    {

        vector<int> ans(queries.size(),  0);
        for (int i = 0; i < queries.size(); i++)
        {
            int h = queries[i][0];
            int k = queries[i][1];
            int r = queries[i][2];

            for (auto p : points)
            {
                int x = p[0];
                int y = p[1];

                double temp = (x - h) * (x - h);
                temp += (y - k) * (y - k);

                temp = sqrt(temp);

                if (temp > double(r))
                {
                    continue;
                }
                else
                {
                    ans[i]++;
                }
            }
        }

        return ans;
    }
};
