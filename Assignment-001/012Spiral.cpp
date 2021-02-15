#include <bits/stdc++.h>
using namespace std;

void spiralForm(vector<vector<int>> vec, int i, int j, int m, int n)
{
    if (i >= m or j >= n)
    {
        return;
    }
    for (int p = j; p < n; p++)
    {
        cout << vec[i][p] << " ";
    }
    for (int p = i + 1; p < m; p++)
    {
        cout << vec[p][n - 1] << " ";
    }
    if ((m - 1) != i)
    {
        for (int p = n - 2; p >= j; p--)
        {
            cout << vec[m - 1][p] << " ";
        }
    }
    if ((n - 1) != j)
    {
        for (int p = m - 2; p > i; p--)
        {
            cout << vec[p][j] << " ";
        }
    }
    spiralForm(vec, i + 1, j + 1, m - 1, n - 1);
}

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
        cout << "\n";
    }
    spiralForm(vec, 0, 0, n, m);
    return 0;
}