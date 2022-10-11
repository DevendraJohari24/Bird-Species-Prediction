int n = grid.size();
int m = grid[0].size();
vector<vector<int>> dp(n, vector<int>(m, 0));

for (int j = m - 1; j >= 0; j--)
{
    for (int i = n - 1; i >= 0; i--)
    {
        if (j == m - 1)
        {
            dp[i][j] = grid[i][j];
        }
        else if (i == 0)
        {
            dp[i][j] = grid[i][j] + max(dp[i][j + 1], dp[i + 1][j + 1]);
        }
        else if (i == n - 1)
        {
            dp[i][j] = grid[i][j] + max(dp[i][j + 1], dp[i - 1][j + 1]);
        }
        else
        {
            dp[i][j] = grid[i][j] + max(dp[i][j + 1], max(dp[i + 1][j + 1], dp[i - 1][j + 1]));
        }
    }
}
int max = dp[0][0];
for (int i = 1; i < dp.size(); i++)
{
    if (dp[i][0] > max)
    {
        max = dp[i][0];
    }
}

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cout << dp[i][j] << " ";
    }
    cout << "\n";
}

return max;