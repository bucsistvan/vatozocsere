#include <iostream>

using namespace std;

int main()
{
    int a=2;
    int b=5;
    cout<<"Az eredeti sorrend:\n";
    cout<<"a="<<a<<'\n';
    cout<<"b="<<b<<'\n';
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"Csere osszeadas es kivonassal:\n";
    cout<<"a="<<a<<'\n';
    cout<<"b="<<b<<'\n';
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"Visszacsere szorzas osztassal:\n";
    cout<<"a="<<a<<'\n';
    cout<<"b="<<b<<'\n';
    return 0;
}
