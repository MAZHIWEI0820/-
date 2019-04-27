#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int a;
    int k=rand()%1000;
    int count=1;
    srand(time(0));

    cout<<"I have a number between 1 and 1000";
    cout<<"\n";
    cout<<"Can you guess my number ?";
    cout<<"\n";
    cout<<"\n";

    for(int i=0;i<1;i++)
    {
        cout<<"Please type your first guess";
        cin>>a;
        while(a==k)

        break;

        while(a>k)
        {
            cout<<"Too high,try again";
            cout<<"Please type your number again";
            cin>>a;
            count++;
        }
        while(a<k)
        {
            cout<<"Too low,try again";
            cout<<"Please type your number again";
            cin>>a;
            count++;
        }

        if(count==10)
            cout<<"You should be able to do better";
        else
            cout<<"Either you know the secret or you got lucky";
    }
    cout<<"历经了"<<count<<"次.猜对了."<<endl;
    return 0;
}
