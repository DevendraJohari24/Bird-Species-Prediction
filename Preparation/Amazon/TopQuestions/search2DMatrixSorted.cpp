bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int n = matrix.size();
    int m = matrix[0].size();
    int largest = matrix[n - 1][m - 1];
    int smallest = matrix[0][0];

    if (target < smallest || target > largest)
    {
        return false;
    }

    int i = 0;
    int j = m - 1;
    while (i < n && j >= 0)
    {
        if (matrix[i][j] == target)
        {
            return true;
        }
        if (matrix[i][j] > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return false;
}