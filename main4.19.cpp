#include <iostream>

using namespace std;

int main()
{
    int a=0;
    int b=0;
    int c=0;
    int d=0;
    int i=1;


    cout<<"�������һ����:";
    cin>>a;

    cout<<"������ڶ�����:";
    cin>>b;

    while(i<=8)
    {
        cout<<"���������������:";
        cin>>c;
        i=i+1;
        if(a>b)
        {
            if(a>c,b>c)
            {a=a,b=b;}
            else
            {b=a,a=c;}
        }
        else
        {
            if(b>c,a>c){d=a,a=b,b=d;}
            else{a=c,b=b;}
        }
    }
    cout<<"The largest is "<<a;
    cout<<"The second is "<<b;
}

