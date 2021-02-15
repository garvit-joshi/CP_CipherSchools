#include <bits/stdc++.h>
using namespace std;

void segregate0and1(vector<int> &vec)
{
    int type0 = 0;
    int type1 = vec.size() - 1;

    while (type0 < type1)
    {
        if (vec[type0] == 1)
        {
            swap(vec[type0], vec[type1]);
            type1--;
        }
        else
        {
            type0++;
        }
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
    segregate0and1(vec);
    for (int i = 0; i < range; i++)
    {
        cout<< vec[i]<<" ";
    }
    cout<<"\n";
    return 0;
}