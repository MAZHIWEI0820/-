#include <iostream>

using namespace std;

int main()
{
    double a,b,c;
    cout<<"输入三角形的三个边长:";
    cin>>a>>b>>c;

    if(a+b>c)
    {
        cout<<"可以作为三角形的三边";
    }
    else
    {
        cout<<"不可以作为三角形的三边";
    }
    cout<<endl;
}
