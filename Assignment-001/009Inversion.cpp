#include <bits/stdc++.h>
using namespace std;

int getInvCount(vector<int> vec)
{
    int inv_count = 0, n = vec.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (vec[i] > vec[j])
            {
                inv_count++;
            }
        }
    }
    return inv_count;
}

int main()
{
    int range;
    cin >> range;
    vector<int> vec(range);
    for (int i = 0; i < range; i++)
    {
        cin >> vec[i];
    }
    cout << getInvCount(vec);
    return 0;
}