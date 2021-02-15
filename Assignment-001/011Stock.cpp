#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> prices)
{
    int n = prices.size();
    int cost = 0;
    int maxCost = 0;
    if (n == 0)
    {
        return 0;
    }
    int min_price = prices[0];
    for (int i = 0; i < n; i++)
    {
        min_price = min(min_price, prices[i]);
        cost = prices[i] - min_price;

        maxCost = max(maxCost, cost);
    }
    return maxCost;
}

int main()
{
    int range, x;
    cout << "Enter No. of Elements:";
    cin >> range;
    vector<int> prices(range);
    for (int i = 0; i < range; i++)
    {
        cin >> prices[i];
    }
    cout << maxProfit(prices);
    cout << "\n";
    return 0;
}