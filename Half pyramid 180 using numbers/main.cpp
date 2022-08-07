#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"\nEnter thesize of pyramid: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<i+1<<"\t";
        }
        cout<<endl<<endl;
    }
    return 0;
}
