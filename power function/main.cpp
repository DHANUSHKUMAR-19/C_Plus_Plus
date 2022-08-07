#include <iostream>

using namespace std;
int power(int base,int expo)
{
    int a=1;
    for(int i=1;i<=expo;i++){
        a=a*base;
    }
    return a;
}
int main()
{
    int base,pow;
    cout<<"\nEnter the Base: "<<endl;
    cin>>base;
    cout<<"\nEnter the Power: "<<endl;
    cin>>pow;
    cout<<"Answer: "<<power(base,pow);
    return 0;
}
