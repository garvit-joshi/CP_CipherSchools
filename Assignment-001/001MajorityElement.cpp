#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector <int> vec, int range)
{
    int maxCount = 0, index=-1;
    for (int i = 0; i < range; i++)
    {
        int count = 0;
        for (int j = 0; j < range; j++)
        {
            if (vec[i] == vec[j])
                count++;
        }

        if (count > maxCount)
        {
            maxCount = count;
            index = i;
        }
    }

    if (maxCount > range / 2)
        return vec[index];

    else
        return -1;
}

int main()
{
    int range;
    cin >> range;
    vector<int> vec(range);
    for (int i = 0; i < range; i++)
    {
        cin>>vec[i];
    }
    cout << majorityElement(vec, range)<<"\n";
    return 0;
}