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

    cout<<"请输入三角形的一条边长:";
    cin>>a;
    cout<<"请输入三角形的一条边长;";
    cin>>b;
    cout<<"请输入三角形的一条边长:";
    cin>>c;


    A=a*a;
    B=b*b;
    C=c*c;

    if(A+B==C)
    {
        cout<<"该三角形可以表示为直角三角形";
    }
    else
    {
        cout<<"该三角形不可以表示为直角三角形";
    }
    return 0;
}
