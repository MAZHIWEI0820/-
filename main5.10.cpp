#include <iostream>

using namespace std;

int main()
{
    unsigned int a=0;
    unsigned int sum=1;

    cout<<"该数是: ";
    cin>>a;

    for(unsigned i=1;i<=a;++i)
    {
        sum=sum*i;


    }
    cout<<"该数的阶乘是: "<<sum;

}
