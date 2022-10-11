int longestConsecutive(vector<int> &nums)
{
    unordered_set<int> s;
    for (int x : nums)
    {
        s.insert(x);
    }
    int ans = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        int len = 0;
        if (s.find(nums[i] - 1) != s.end())
        {
            continue;
        }
        else
        {
            int current_element = nums[i];
            while (s.find(current_element) != s.end())
            {
                current_element++;
                len++;
            }
        }
        ans = max(ans, len);
    }
    return ans;
}