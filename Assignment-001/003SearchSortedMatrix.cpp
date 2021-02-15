#include <bits/stdc++.h>

using namespace std;

int searchSortedMatrix(vector<vector<int>> vec, int n, int x)
{
    if (n == 0)
    {
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (vec[i][j] == x)
            {
                cout << "Element at:[" << i << "][" << j << "]\n";
                return 0;
            }
        }
    }

    cout << "No Element Found";
    return -1;
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
        cout<<"\n";
    }
    searchSortedMatrix(vec, m, n);

    return 0;
}