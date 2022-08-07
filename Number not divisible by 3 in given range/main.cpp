#include <iostream>

using namespace std;

int main()
{
    int range;
    cout<<"\nEnter the range: ";
    cin>>range;
    for(int i=1;i<=range;i++)
    {
        if(i%3==0)
        {
            continue;
        }
        cout<<i<<"\t";
    }
    cout << endl;
    return 0;
}
