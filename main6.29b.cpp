#include <iostream>

using namespace std;

int main()
{
    int i,k=0,j;

    cout<<"输出2~10000之间所有的素数: "<<endl;

    for(unsigned int i=2;i<=10000;++i)
    {
        for(j=2;j<=i;++j)
        {
            if(i%j==0)
                break;
        }
        if(i==j)
        {
            cout<<i<<" ";
            k++;
            if(k%5==0)
                cout<<endl;
        }
    }
    return 0;
}
