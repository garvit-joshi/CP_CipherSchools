#include<bits/stdc++.h>
#define mod 1e9+7
#define ll long long int
using namespace std;
int titleToNumber(string s) 
{
    long res = 0;
    long cnt=1;
    long n = s.size();
    for(int i=n-1;i>=0;i--)
    {
       res+=cnt*(s[i]-'A'+1);
       cnt*=26;
    }
    return res; 
}
int main()
{
    cout<<titleToNumber("ZZA");
}