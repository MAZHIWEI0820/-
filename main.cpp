#include <iostream>

using namespace std;

int main()
{
    int number1=0;
    int number2=0;
    int result1=0;
    int result2=0;
    int result3=0;
    int result4=0;

    cout<<"输入的第一个数是:";
    cin>>number1;

    cout<<"输入的第二个数是:";
    cin>>number2;

    result1=number1+number2;
    result2=number1-number2;
    result3=number1*number2;
    result4=number1/number2;

    cout<<"result1 is"<<result1<<endl;
    cout<<"result2 is"<<result2<<endl;
    cout<<"result3 is"<<result3<<endl;
    cout<<"result4 is"<<result4<<endl;
}
