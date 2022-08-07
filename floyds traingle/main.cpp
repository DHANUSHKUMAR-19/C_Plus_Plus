#include <iostream>

using namespace std;

int main()
{
    int n,a=1;
    cout<<"\nEnter the size of pyramid: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<a<<"\t";
            a++;
        }
        cout<<endl<<endl;
    }
    return 0;
}
