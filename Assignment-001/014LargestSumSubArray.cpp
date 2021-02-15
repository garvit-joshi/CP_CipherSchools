#include <bits/stdc++.h>

using namespace std;

int maxSubArraySum(const vector <int> v1)
{
    int n= v1.size();
    int max_ending_here = 0,max_so_far = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + v1[i];
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
        }

        if (max_ending_here < 0)
        {
            max_ending_here = 0;
        }
    }
    return max_so_far;
}

int main()
{
    int range, x;
    cout << "Enter No. of Elements:";
    cin >> range;
    vector<int> vec(range);
    for (int i = 0; i < range; i++)
    {
        cin >> vec[i];
    }
    cout << maxSubArraySum(vec);
    return 0;
}