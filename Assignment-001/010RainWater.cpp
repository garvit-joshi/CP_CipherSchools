#include <bits/stdc++.h>
using namespace std;

int maxWater(connst vector <int> vec)
{
    int n= vec.size();
    stack<int> state;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        while ((!state.empty()) && (vec[state.top()] < vec[i]))
        {
            int pop_height = vec[state.top()];
            state.pop();
            if (state.empty())
            {
                break;
            }
            int distance = i - state.top() - 1;
            int min_height = min(vec[state.top()], vec[i]) - pop_height;
            ans += distance * min_height;
        }
        state.push(i);
    }
    return ans;
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
    cout << maxWater(vec);

    return 0;
}