/*
Check if two people starting from different points ever meet
*/
#include <bits/stdc++.h>

using namespace std;

string twoMeet(int &x1, const int &v1, int &x2, const int &v2)
{
    if (x1 < x2)
    {
        while (x1 < x2)
        {
            x1 += v1;
            x2 += v2;
            if (x1 == x2)
            {
                return "Yes";
            }
        }
    }
    else
    {
        while (x2 < x1)
        {
            x1 += v1;
            x2 += v2;
            if (x1 == x2)
            {
                return "Yes";
            }
        }
    }
    return "No";
}

int main()
{
    int x1, v1, x2, v2;
    cout << "First Person Position:";
    cin >> x1;
    cout << "First Person Speed:";
    cin >> v1;
    cout << "First Person Position:";
    cin >> x2;
    cout << "First Person Speed:";
    cin >> v2;
    cout<<"\n"<<twoMeet(x1, v1, x2, v2)<<"\n";
    return 0;
}