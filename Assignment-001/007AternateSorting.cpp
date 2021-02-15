#include <bits/stdc++.h> 
using namespace std;

int alternateSort(vector<int> vec) 
{
    sort(vec.begin(), vec.end()); 
    int n=vec.size();
    int i = 0, j = n-1; 
    while (i < j) { 
        cout << vec[j--] << " "; 
        cout << vec[i++] << " "; 
    }
    if (n % 2 != 0)
    {
        cout << vec[i];
    }
    return 0;
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
    alternateSort(vec);
    cout<<"\n";
    return 0; 
}