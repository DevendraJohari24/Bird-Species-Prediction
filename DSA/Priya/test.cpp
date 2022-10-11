#include<bits/stdc++.h>
using namespace std;
vector<int> maxSubsequence(vector<int> &nums, int k)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (pq.size() < k)
            pq.push({nums[i], i});
        else
        {
            if (!pq.empty() && nums[i] > pq.top().first)
                pq.pop();
            if (pq.size() < k)
                pq.push({nums[i], i});
        }
    }
    vector<int> result;
    while (!pq.empty())
    {
        int x = pq.top().second;
        result.push_back(x);
        pq.pop();
    }
    sort(result.begin(), result.end());
    for (int i = 0; i < result.size(); i++)
        result[i] = nums[result[i]];
    return result;
}

int main()
{
    vector<int> stockPrice = {1, 2, 3, 7, 3, 5};
    int k = 3;

    cout << maxSubsequence(stockPrice, k);

    return 0;
}
