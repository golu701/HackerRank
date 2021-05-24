#include<iomanip>
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a;
    long b;
    char c;
    float d;
    double g;
    cin>>a>>b>>c>>d>>g;
    cout<<a<<"\n"<<b<<"\n"<<c<<"\n";
    cout<<std::fixed;
    cout<<setprecision(3)<<d<<"\n";
    cout<<setprecision(9)<<g;
    
    return 0;
}
