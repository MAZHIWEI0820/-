#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a=0;
    int b=0;

    for(unsigned int i=1;i<=100;++i)
    {
        int k=rand()%2;

        if(k==1)
            a=a+1;
        else
            b=b+1;
    }
    cout<<"Head: "<<a<<endl;
    cout<<"Tail: "<<b<<endl;
}
