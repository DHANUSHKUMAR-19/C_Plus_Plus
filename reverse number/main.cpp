#include <iostream>

using namespace std;

int main()
{
    int num,r,a=0;
    cout<<"\nEnter the number: ";
    cin>>num;
    while(num!=0)
    {
        r=num%10;
        a=r+a*10;
        num=num/10;

    }
    cout << "\nReversed number: "<<a << endl;
    return 0;
}
