#include <iostream>

using namespace std;

int iseven(int x)
{
   return !(x%2);
}

int main()
{
    int a;

    while(cin>>a)
        if(iseven(a))
        cout<<"true";
    else
        cout<<"false";

    return 0;
}
