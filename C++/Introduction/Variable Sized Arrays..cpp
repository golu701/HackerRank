#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,n1;
    int data;
    int a,b;
    vector<vector<int>> arr;
    cin>>n>>n1;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        vector<int> vector1;
        for(int j=0;j<a;j++)
        {
            cin>>data;
            vector1.push_back(data);
        }
        arr.push_back(vector1);
    }
    for(int i=0;i<n1;i++)
    {
        
        cin>>a>>b;
        cout<<arr[a][b]<<endl;
    }
    return 0;
}
