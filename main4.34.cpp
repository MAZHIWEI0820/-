#include <iostream>

using namespace std;

int main()
{
    unsigned int x=0;
    unsigned int n=1;
    unsigned int sum=1;

    cout<<"输入的x的值是:";
    cin>>x;

    while (n<=x)
    {
        sum=sum*n;
        n=n+1;

    }
        cout<<"该数的阶乘:"<<sum<<endl;
}
