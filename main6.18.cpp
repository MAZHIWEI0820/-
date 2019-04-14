#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x=0;
    int y=0;
    int result=0;

    cout<<"输入的x的值为: ";
    cin>>x;
    cout<<"输入的y的值为: ";
    cin>>y;

    result=pow(x,y);

    cout<<"x的y次幂为: "<<result<<endl;
}

