#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;
    int A=0;
    int B=0;
    int C=0;

    cout<<"�����������ε�һ���߳�:";
    cin>>a;
    cout<<"�����������ε�һ���߳�;";
    cin>>b;
    cout<<"�����������ε�һ���߳�:";
    cin>>c;


    A=a*a;
    B=b*b;
    C=c*c;

    if(A+B==C)
    {
        cout<<"�������ο��Ա�ʾΪֱ��������";
    }
    else
    {
        cout<<"�������β����Ա�ʾΪֱ��������";
    }
    return 0;
}
