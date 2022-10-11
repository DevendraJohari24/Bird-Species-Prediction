class Solution
{
public:
    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int max_area = 0;
        int area;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                area = 0;
                if (grid[i][j] == 1)
                {
                    area = 1;
                    foundMaxIsland(grid, i, j, area);
                }
                max_area = max(max_area, area);
            }
        }
        return max_area;
    }

    int foundMaxIsland(vector<vector<int>> &grid, int i, int j, int &area)
    {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())
        {
            return 0;
        }
        if (grid[i][j] == 0)
        {
            return 0;
        }
        grid[i][j] = 0;
        if (foundMaxIsland(grid, i + 1, j, area) == 1)
        {
            area++;
        }
        if (foundMaxIsland(grid, i - 1, j, area) == 1)
        {
            area++;
        }
        if (foundMaxIsland(grid, i, j + 1, area) == 1)
        {
            area++;
        }
        if (foundMaxIsland(grid, i, j - 1, area) == 1)
        {
            area++;
        }

        return 1;
    }
};