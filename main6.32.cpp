#include <iostream>

using namespace std;

int qualityPoints(int i)
{
    int a;

    if(a<=100,a>=90)
        return 4;
    else
    if(a<=89,a>=80)
        return 3;
    else
    if(a<=79,a>=70)
        return 2;
    else
    if(a<=69,a>=60)
        return 1;
    else
    if(a<=59,a>=0)
        return 0;
    else
    if(a>100,a<0)
        cout<<"Wrong";

}

int main()
{
    int x;
    cout<<"学生的成绩为: ";
    cin>>x;

    cout<<"学生的绩点为: "<<qualityPoints(x)<<endl;

    return 0;
}
