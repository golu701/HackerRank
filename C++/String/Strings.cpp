#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<a.length()<<" "<<b.length()<<endl;
    cout<<a+b<<endl;
    char x = a[0];
    char y=b[0];
    a.erase(a.begin());
    b.erase(b.begin());
    cout<<y+a<<" "<<x+b;

}
