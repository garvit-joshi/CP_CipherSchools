#include <bits/stdc++.h>
using namespace std;

int findPeak(vector<int> vec, int range)
{
    if (range == 1)
    {
        return vec[0];
    }
    if (vec[0] >= vec[1])
        return 0;
    if (vec[range - 1] >= vec[range - 2])
    {
        return range - 1;
    }
    for (int i = 1; i < range - 1; i++)
    {
        if (vec[i] >= vec[i - 1] && vec[i] >= vec[i + 1])
        {
            return i;
        }
    }
    return 0;
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
    cout << findPeak(vec, range) << "\n";
    return 0;
}