#include <iostream>
#include <cmath>

using namespace std;

double hypotenuse(double x,double y)
{

    double z=1.0;
    z=sqrt(x*x+y*y);

    return z;
}

int main()
{
    int x;
    int y;

    cout<<"直角三角形的一条直角边为: ";
    cin>>x;

    cout<<"直角三角形的另一条直角边为: ";
   cin>>y;

    cout<<"该直角三角形的斜边为: "<<hypotenuse(x,y)<<endl;

    return 0;
}
