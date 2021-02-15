#include<bits/stdc++.h>
using namespace std; 
  

void mergeArrays(vector <int> vec1, vector<int> vec2, int n1, int n2, vector<int> vec3) 
{ 
    int i = 0, j = 0, k = 0; 

    while (i<n1 && j <n2) 
    {
        if (vec1[i] < vec2[j]) 
            vec3[k++] = vec1[i++]; 
        else
            vec3[k++] = vec2[j++]; 
    }
    while (i < n1) 
        vec3[k++] = vec1[i++]; 
    while (j < n2) 
        vec3[k++] = vec2[j++]; 
} 
  

int main() 
{ 
    int range1,range2, k;
    cin >> range1;
    vector<int> vec1(range1);
    for (int i = 0; i < range1; i++)
    {
        cin >> vec1[i];
    }

    cin>>range2;
    vector<int> vec2(range2);
    for (int i = 0; i < range2; i++)
    {
        cin >> vec2[i];
    }
  
    vector<int> vec3(range1+range2);

    mergeArrays(vec1, vec2, range1, range2, vec3); 
  
    cout << "Vector after merging" <<endl; 
    for (int i=0; i < range1+range2; i++) 
    {
        cout << vec3[i] << " ";
    }
  
    return 0; 
}