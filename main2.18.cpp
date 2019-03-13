#include <iostream>

using namespace std;

int main()
{
    int number1=0;
    int number2=0;

    cout<<"输入的第一个数是:";
    cin>>number1;

    cout<<"输入的第二个数是:";
    cin>>number2;

    if(number1>number2)
        cout<<"number1 is large"<<endl;

    if(number1<number2)
        cout<<"number2 is large"<<endl;

    if(number1==number2)
        cout<<"Thses numbers are equal"<<endl;
}
