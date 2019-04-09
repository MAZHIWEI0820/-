#include <iostream>

using namespace std;

int main()
{
    unsigned int a=0;
    unsigned int b=0;
    unsigned int c=0;

    cout<<"The number of numbers is : ";
    cin>>a;

    cout<<"The number is: ";
    cin>>b;

    for(unsigned int i=1;i<a;++i)

        {
            cout<<"The next number is: ";
            cin>>c;

            if(b<=c)
                b=b;
            else
                b=c;
        }
        cout<<"The smallest is: "<<b<<endl;
}
