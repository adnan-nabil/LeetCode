class Solution
{
public:
    void dfs(int i, int j, vector<vector<int>> &image, int newcolor, int initial_color)
    {
        int n = image.size(), m = image[0].size();

        if (i < 0 || j < 0)
        {
            return;
        }
        if (i >= n || j >= m)
        {
            return;
        }
        if (image[i][j] != initial_color)
        {
            return;
        }

        image[i][j] = newcolor;

        dfs(i + 1, j, image, newcolor, initial_color);

        dfs(i - 1, j, image, newcolor, initial_color);

        dfs(i, j + 1, image, newcolor, initial_color);

        dfs(i, j - 1, image, newcolor, initial_color);
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int initial_color = image[sr][sc];
        if (image[sr][sc] != color)
        {
            dfs(sr, sc, image, color, initial_color);
        }

        return image;
    }
};
