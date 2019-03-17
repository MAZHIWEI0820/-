#include <iostream>

using namespace std;

int main()
{
    int number1=0;
    int number2=0;
    int number3=0;
    int number4=0;
    int number5=0;

    cout<<"输入的第一个数是:";
    cin>>number1;

    cout<<"输入的第二个数是:";
    cin>>number2;

    cout<<"输入的第三个数是:";
    cin>>number3;

    cout<<"输入的第四个数是:";
    cin>>number4;

    cout<<"输入的第五个数是:";
    cin>>number5;

    if(number1>number2&number3&number4&number5)
        cout<<"number1 is the largest"<<endl;

    if(number2>number1&number3&number4&number5)
        cout<<"number2 is the largest"<<endl;

    if(number3>number1&number2&number4&number5)
        cout<<"number3 is the largest"<<endl;

    if(number4>number1&number2&number3&number5)
        cout<<"number4 is the largest"<<endl;

    if(number5>number1&number2&number3&number4)
        cout<<"number5 is the largest"<<endl;

    if(number1<number2&number3&number4&number5)
        cout<<"number1 is the smallest"<<endl;

    if(number2<number1&number3&number4&number5)
        cout<<"number2 is the smallest"<<endl;

    if(number3<number1&number2&number4&number5)
        cout<<"number3 is the smallest"<<endl;

    if(number4<number1&number2&number3&number5)
        cout<<"number4 is the largest"<<endl;

    if(number5<number1&number2&number3&number4)
        cout<<"number5 is the largest"<<endl;
}
