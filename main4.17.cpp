#include <iostream>

using namespace std;

int main()
{
    int number1=0;
    int number2=0;
    int counter=1;

    cout<<"�����һ����:";
    cin>>number1;

    while(counter<=9)
    {
        cout<<"������һ����:";
        cin>>number2;
        counter=counter+1;

        if(number1>number2)
            {number1=number1;}
        else
            {number1=number2;}
    }
    cout<<"The Largest is :"<<number1;

}


