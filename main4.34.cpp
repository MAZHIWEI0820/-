#include <iostream>

using namespace std;

int main()
{
    unsigned int x=0;
    unsigned int n=1;
    unsigned int sum=1;

    cout<<"�����x��ֵ��:";
    cin>>x;

    while (n<=x)
    {
        sum=sum*n;
        n=n+1;

    }
        cout<<"�����Ľ׳�:"<<sum<<endl;
}
