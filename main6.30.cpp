#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    int m,n;

    cout<<"输入一个四位数: ";
    cin>>m;

    a=m/1000;
    b=(m-a*1000)/100;
    c=(m-a*1000-b*100)/10;
    d=m%10;
    n=d*1000+c*100+b*10+a;

    cout<<"转换后的数为: "<<n<<endl;

    return 0;
}
