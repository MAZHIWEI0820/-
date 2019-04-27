#include <iostream>

using namespace std;

double min(double a,double b,double c)
{
    int m=a;
    if(a>b)m=b;
    if(m>c)m=c;

    return m;
}

int main()
{
    double x,y,z;

    cout<<"Please enter three numbers";
    cin>>x>>y>>z;

    cout<<"The min="<<min(x,y,z)<<endl;
}
