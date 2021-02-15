#include <bits/stdc++.h>
using namespace std;

void findFirstAndLast(vector<int> vec, int x)
{
    int first = -1, last = -1;
    for (int i = 0; i < vec.size(); i++)
    {
        if (x != vec[i])
        {
            continue;
        }
        if (first == -1)
        {
            first = i;
        }
        last = i;
    }
    if (first != -1)
    {
        cout << "First Occurrence = " << first << "/nLast Occurrence = " << last;
    }
    else
    {
        cout << "Not Found";
    }
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
    cout << "Enter No. to be searched:";
    cin >> x;
    findFirstAndLast(vec, x);
    return 0;
}