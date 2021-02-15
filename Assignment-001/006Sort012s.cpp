#include <bits/stdc++.h> 
using namespace std; 

int sort012(vector <int> &vec) 
{ 
    int lo = 0; 
    int hi = vec.size() - 1; 
    int mid = 0; 
    while (mid <= hi) { 
        switch (vec[mid]) { 
        case 0: 
            swap(vec[lo++], vec[mid++]); 
            break; 
        case 1: 
            mid++; 
            break;
        case 2: 
            swap(vec[mid], vec[hi--]); 
            break;
        default:
            cout<<"Wrong Element\n";
            return -1;
        } 
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
    sort012(vec);
    for (int i = 0; i < range; i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<"\n";
    return 0; 
}