#include<bits/stdc++.h>
using namespace std;

int findPlatform(int arr[], int dep[], int n)
{
    // Your code here
    int i = 1;
    int j = 0;
    sort(arr, arr + n);
    sort(dep, dep + n);
    int count = 1;
    int ans = 1;
    while (i < n && j < n)
    {
        if (arr[i] <= dep[j])
        {
            count++;
            i++;
        }
        else
        {
            count--;
            j++;
        }
        ans = max(ans, count);
    }
    return ans;
}
int main(){

}