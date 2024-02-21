class Solution
{
    const int N = 150;
    const int inf = 1e9 + 10;

    int distance(int source, int n, vector<pair<int, int>> g[n])
    {

        vector<int> dist(N, inf);
        vector<int> vis(N, 0);
        set<pair<int, int>> s;

        dist[source] = 0;
        s.insert({0, source});

        while (s.size() > 0)
        {
            auto node = *s.begin();
            int v = node.second;
            int w = node.first;
            s.erase(s.begin());

            for (auto child : g[v])
            {
                int cv = child.first;
                int cw = child.second;

                if (dist[cv] > dist[v] + cw)
                {
                    dist[cv] = dist[v] + cw;
                    s.insert({dist[cv], cv});
                }
            }
        }

        int ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (dist[i] == inf)
            {
                return -1;
            }
            ans = max(ans, dist[i]);
        }

        return ans;
    }
    // o(v + Elog(v))

public:
    int networkDelayTime(vector<vector<int>> &times, int n, int k)
    {
        vector<pair<int, int>> g[N];

        for (auto vec : times)
        {
            g[vec[0]].push_back({vec[1], vec[2]});
        }
        return distance(k, n, g);
    }
};