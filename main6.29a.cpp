#include <iostream>

using namespace std;

int prime(int x)
{
    int n;
    for(n=2;n<x/2;n++)
    {
        if(x%n==0)
            return 0;
    }
    return 1;
}

int main()
{
    int a,b;
    cout<<"Please enter a number: ";
    cin>>a;
    if(a<=1)
        cout<<"Wrong";
    else
    {
        b=prime(a);
        {
            if(b==1)
                cout<<a<<"是素数"<<endl;
            else
                cout<<"不是素数"<<endl;
        }
    }
    return 0;
}
