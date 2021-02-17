#include<bits/stdc++.h>
using namespace std;
bool isSafe(vector<vector<int>> &v,int col,int row,int x)
{
    for(int i=0;i<col;i++){if(v[row][i]){return false;}}
    for(int i=0;i<row;i++){if(v[i][col]){return false;}}
    for(int i=row,j=col;i>=0 && j>=0;i--,j--){if(v[i][j]){return false;}}
    for(int i=row,j=col;i<x && j>=0;i++,j--){if(v[i][j]){return false;}}
    return true;
}
bool N_queen(vector<vector<int>> &v,int col,int x)
{
    if(col==x){return true;}
    for(int row=0;row<x;row++)
    {
        if(isSafe(v,col,row,x))
        {
            v[row][col]=1;
            if(N_queen(v,col+1,x)==true){return true;}
            v[row][col]=0;
        }
    }
    return false;
}
void printPositions(vector<vector<int>>& v,int x)
{
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<x;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main()
{
    int x;
    cout<<"Enter the value of N:";cin>>x;
    vector<vector<int>> v(x,vector<int>(x,0));
    if(N_queen(v,0,x)==true){cout<<"Possible!!"<<endl;printPositions(v,x);}
    else{cout<<"Not Possible!!";}
}
