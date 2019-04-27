#include <iostream>

using namespace std;

int multiple(int x,int y)
{
   return !(y%x);
}

 int main()
 {
     int a,b;
     while(cin>>a>>b)
        if(multiple(a,b))

        cout<<"true"<<endl;
     else
        cout<<"false"<<endl;

     return 0;
 }



