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

    cout<<"ֱ�������ε�һ��ֱ�Ǳ�Ϊ: ";
    cin>>x;

    cout<<"ֱ�������ε���һ��ֱ�Ǳ�Ϊ: ";
   cin>>y;

    cout<<"��ֱ�������ε�б��Ϊ: "<<hypotenuse(x,y)<<endl;

    return 0;
}
