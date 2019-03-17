#include <iostream>

using namespace std;

int main()
{
    int r=0;
    int number1=0;
    int result1=0;
    int result2=0;
    int result3=0;

    cout<<"圆的半径是:";
    cin>>r;

    cout<<"圆周率π是:";
    cin>>number1;

    result1=r+r;
    result2=(r+r)*number1;
    result3=number1*r*r;

    cout<<"result1 is "<<result1<<endl;
    cout<<"result2 is "<<result2<<endl;
    cout<<"result3 is "<<result3<<endl;
}
