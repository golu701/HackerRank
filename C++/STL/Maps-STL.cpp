#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    string s;
    map<string,int> ma;
    map<string,int>::iterator it;
    for(int i=0,num;i<n;i++)
    {
        cin>>num;cin>>s;
        int marks;
        switch(num)
        {
            case 1:
                cin>>marks;
                ma[s]+=marks; 
                break;
            case 2:
                ma.erase(s);
                break;
            case 3:
                it=ma.find(s);
                cout<<(it!=ma.end()?((*it).second):0)<<endl;
                break;
            
        }
    }
    
    return 0;
}
