#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int arraySize=10;
    int a[arraySize]={2,4,6,8,10,12,14,16,18,20};
    int hold;

    cout<<"Date items in original order\n";

    for(int i=0;i<arraySize;i++)
        cout<<setw(4)<<a[i];


    for(int pass=0;pass<arraySize;pass++)
    {
        for(int j=0;j<arraySize;j++)
        {
            if(a[j]>a[j+1])
            {
                hold=a[j];
                a[j]=a[j+1];
                a[j+1]=hold;
            }
        }
    }
    cout<<"\nDate items in ascending order\n";
    for(int k=0;k<arraySize;k++)
        cout<<setw(4)<<a[k];
}
