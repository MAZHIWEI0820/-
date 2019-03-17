#include <iostream>

using namespace std;

int main()
{
    int number1=0;
    int number2=0;
    int number3=0;
    int result1=0;
    int result2=0;
    int result3=0;

    cout<<"输入的第一个数是:";
    cin>>number1;

    cout<<"输入的第二个数是:";
    cin>>number2;

    cout<<"输入的第三个数是:";
    cin>>number3;

    result1=number1+number2+number3;
    result2=(number1+number2+number3)/3;
    result3=number1*number2*number3;

    cout<<"Result1 is"<<result1<<endl;
    cout<<"Result2 is"<<result2<<endl;
    cout<<"Result3 is"<<result3<<endl;

    if(number1>number2&number3)
        cout<<"number1 is the largest"<<endl;

    if(number2>number1&number3)
        cout<<"number2 is the largest"<<endl;

    if(number3>number1&number2)
        cout<<"number3>number1&number3"<<endl;

    if(number1<number2&number3)
        cout<<"number1 is the smallest"<<endl;

    if(number2<number1&number3)
        cout<<"number2 is the smallest"<<endl;

    if(number3<number1&number2)
        cout<<"number3 is the smallest"<<endl;

}
