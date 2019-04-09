#include <iostream>

using namespace std;

int main()
{
    unsigned int a=0;
    unsigned int number=0;
    unsigned int sum=0;

    cout<<"The number of numbers entered is: ";
    cin>>a;

    for(unsigned int i=0;i<a;++i)

        {
            cout<<"The number is : ";
            cin>>number;
            sum=sum+number;
        }
        cout<<"The sum is: "<<sum<<endl;
}
