#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d;
    int m,n;

    cout<<"����һ����λ��: ";
    cin>>m;

    a=m/1000;
    b=(m-a*1000)/100;
    c=(m-a*1000-b*100)/10;
    d=m%10;
    n=d*1000+c*100+b*10+a;

    cout<<"ת�������Ϊ: "<<n<<endl;

    return 0;
}
