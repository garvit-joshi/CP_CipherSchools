#include <bits/stdc++.h>

using namespace std;

int kthSmallestEle(vector<int> v1, int k)
{
    sort(v1.begin(), v1.end());
    return v1[v1.size() - 1];
}

int main()
{
    int range, k;
    cin >> range;
    vector<int> vec(range);
    for (int i = 0; i < range; i++)
    {
        cin >> vec[i];
    }
    cout << "Enter Value of K to find Kth Smallest Element:";
    cin >> k;
    cout << kthSmallestEle(vec, k) << "\n";
    return 0;
}