#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"\nEnter thesize of pyramid: ";
    cin>>n;
    for(int i=n;i>0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*\t";
        }
        cout<<endl<<endl;
    }
    return 0;
}
