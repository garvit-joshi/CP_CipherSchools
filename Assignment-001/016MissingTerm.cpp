#include <bits/stdc++.h>
using namespace std;
 

int getMissingTerm(vector <int> vec)
{
    int n=vec.size();
    int sum = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
        sum -= vec[i];
    return sum;
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
    cout<< getMissingTerm(vec);
}