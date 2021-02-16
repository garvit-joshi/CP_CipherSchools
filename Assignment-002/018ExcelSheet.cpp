#include<bits/stdc++.h>
#define mod 1e9+7
#define ll long long int
using namespace std;
string convertToTitle(int n) 
{
    string s="";
    n--;
    while(n>=0){
        s+=('A'+n%26);
        n/=26;
        n--;
    }
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
    cout<<convertToTitle(777);
}